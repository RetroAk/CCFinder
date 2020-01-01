int main()
{
        cout << "CC Finder by independent 2.2 https://GitHub.com/independentcod All rights reserved" << std::endl;
        cout << "Please wait a few hours this will take a while..." << std::endl;
        cout << "---" << std::endl;
        std::ofstream fout("CCFinder.log", ios::app);
        fout << "CC Finder by independent 2.2 https://GitHub.com/independentcod All rights reserved" << std::endl;

                for (const auto& x : fs::recursive_directory_iterator("/")) {
                                if (boost::filesystem::is_regular_file(x.path())) {

                        if (x.path().extension() == ".txt" || x.path().extension() == ".dmp" || x.path().extension() == ".csv" || x.path().extension() == ".dat" || x.path().extension() == ".db" || x.path().extension() == ".dbf" || x.path().extension() == ".sql" || x.path().extension() == ".xml" || x.path().extension() == ".mdb" || x.path().extension() == ".sav" || x.path().extension() == ".html" || x.path().extension() == ".htm") {
                                        boost::filesystem::absolute(x.path().filename());
                                        fs::path entry = x;
                                        std::string line;
                                        std::cout << entry << std::endl;
                                        try
                                        {

                                                boost::iostreams::stream_buffer<boost::iostreams::file_descriptor_source> bis(entry);
                                                std::istream myfile(&bis);
                                                boost::regex expr1("\\b\\d{15,16}\\b");
                                                boost::smatch what1;
                                                if (!myfile) {
                                                        cout << " Failed to open " << entry << endl;
                                                }
                                                while (getline(myfile, line))
                                                {
                                                        if (boost::regex_search(line, what1, expr1))
                                                        {

                                                                if (checkLuhn(what1.str())) {
                                                                        fout << line << std::endl;
                                                                        std::cout << line << std::endl;
                                                                        for (int i(0); i < what1.size(); i++) {
                                                                               std::cout << what1[i] << std::endl;
                                                                        }
                                                                }
                                                        }

                                                }
                                        }
                                        catch (const std::exception & ex)
                                        {

                                                std::cout << entry << " " << ex.what() << std::endl;
                                        }
                                }
                        }
                }
}

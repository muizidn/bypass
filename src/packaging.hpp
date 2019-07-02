//
//  packaging.hpp
//  bypass
//
//  Created by Jon Gabilondo on 19/03/2017.
//

#ifndef packaging_hpp
#define packaging_hpp

#include <stdio.h>

int unzip_ipa(const std::string argIpaPath,const std::string tempDirectory);

int repack( const boost::filesystem::path & tempDirectoryPath, boost::filesystem::path & outRepackedIPAPath);

int deployToNewIPAtoDestination(const boost::filesystem::path & inputIPAPath,
                                const boost::filesystem::path & originalIPAPath,
                                const std::string & newIPAName,
                                const boost::filesystem::path & newDestinationFolderPath,
                                bool wasInjected,
                                boost::filesystem::path & outNewIPAPath);

int deployToNewAppToDestination(const boost::filesystem::path & inputAppPath,
                                const boost::filesystem::path & originalAppPath,
                                const std::string & newAppName,
                                const boost::filesystem::path & newDestinationFolderPath,
                                boost::filesystem::path & outNewAppPath);


#endif /* packaging_hpp */

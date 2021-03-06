/*
 * Copyright (C) 2014-2015 Daniel Scharrer
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the author(s) be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

/*!
 * \file
 *
 * GOG.com-specific extensions.
 */
#ifndef INNOEXTRACT_CLI_GOG_HPP
#define INNOEXTRACT_CLI_GOG_HPP

#include <string>
#include <vector>

#include <boost/filesystem/path.hpp>

namespace setup { struct info; }

struct extract_options;

namespace gog {

//! \return the GOG.com game ID for this installer or an empty string
std::string get_game_id(const setup::info & info);

void process_bin_files(const std::vector<boost::filesystem::path> & files,
                       const extract_options & o, const setup::info & info);

} // namespace gog

#endif // INNOEXTRACT_CLI_GOG_HPP

/*
 * probes.hpp: proof-of-concept DNMP probes
 *
 * Copyright (C) 2019 Pollere, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, see <https://www.gnu.org/licenses/>.
 *  You may contact Pollere, Inc at info@pollere.net.
 *
 *  The DNMP proof-of-concept is not intended as production code.
 *  More information on DNMP is available from info@pollere.net
 */

/*      Probes 
 *
 * Probes that can be used by a PoC DNMP NOD. Must follow format of accepting a string
 * that can be parsed for any required arguments and returning results in a string
 * that the DNMP syncer publisher will convert to Data.
 * Each probe has a DNMP probeType name and may need some way to indicate that.
 * Probes need to check arguments to ensure makes sense.
 */

//Pinger Client just uses timestamps from Publication name so do nothing
static std::string echoProbe(const std::string& args) {
    if(!args.empty())
        LOG("echoProbe: nonempty argument is ignored");
    return std::string("");
}


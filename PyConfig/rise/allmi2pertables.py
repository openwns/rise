###############################################################################
# This file is part of openWNS (open Wireless Network Simulator)
# _____________________________________________________________________________
#
# Copyright (C) 2004-2007
# Chair of Communication Networks (ComNets)
# Kopernikusstr. 5, D-52074 Aachen, Germany
# phone: ++49-241-80-27910,
# fax: ++49-241-80-22242
# email: info@openwns.org
# www: http://www.openwns.org
# _____________________________________________________________________________
#
# openWNS is free software; you can redistribute it and/or modify it under the
# terms of the GNU Lesser General Public License version 2 as published by the
# Free Software Foundation;
#
# openWNS is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
# A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
# details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
###############################################################################

# The data of these tables can not be published under LGPL.
# Therefore the tables remain empty.

class AllMI2PERTables:

    MI2PER = None

    def __init__(self):

        self.MI2PER = {}
        self.MI2PER['UNDEFINED_CODING'] = {}
        self.MI2PER['No'] = {}
        
        self.MI2PER['Turbo_UMTS-1/3'] = {}
        self.MI2PER['Turbo_UMTS-1/2'] = {}
        self.MI2PER['Turbo_UMTS-2/3'] = {}
        self.MI2PER['Turbo_UMTS-5/6'] = {}
        
        self.MI2PER['RCPC_BENQ-1/3'] = {}
        self.MI2PER['RCPC_BENQ-1/2'] = {}
        self.MI2PER['RCPC_BENQ-2/3'] = {}
        
        self.MI2PER['LDPC_SEUK-1/2'] = {}
        self.MI2PER['LDPC_SEUK-2/3'] = {}
        self.MI2PER['LDPC_SEUK-3/4'] = {}
        
        self.MI2PER['Turbo_EAB-1/3'] = {}
        self.MI2PER['Turbo_EAB-1/2'] = {}
        self.MI2PER['Turbo_EAB-2/3'] = {}
        
        self.MI2PER['WIMAX-1/2'] = {}
        self.MI2PER['WIMAX-2/3'] = {}
        self.MI2PER['WIMAX-3/4'] = {}


allMI2PERTables = AllMI2PERTables()
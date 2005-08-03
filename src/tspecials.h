/***************************************************************************
 *   Copyright (C) 2004 by Roman Savochenko                                *
 *   rom_as@fromru.com                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef TSPECIALS_H
#define TSPECIALS_H

#define  VER_SPC 1    //SpecialS type modules version

#include <string>

#include "tgrpmodule.h"

using std::string;

//================================================================
//=========== TSpecial ===========================================
//================================================================

class TSpecial : public TModule
{
    /** Public methods: */
    public:
	TSpecial( );

    protected:
	//================== Controll functions ========================
	void cntrCmd_( const string &a_path, XMLNode *opt, int cmd );
	
    protected:
	bool  run_st; 
	
    /** Private atributes: */
    private:
	static const char *o_name;
};

//================================================================
//=========== TSpecialS ==========================================
//================================================================

class TSpecialS : public TGRPModule
{
    /** Public methods: */
    public:
	TSpecialS( TKernel *app );

	int gmdVer( ) { return(VER_SPC); }
	void gmdLoad( );

	string optDescr( );
	
    /** Private methods: */
    private:
	//================== Controll functions ========================
	void cntrCmd_( const string &a_path, XMLNode *opt, int cmd );
	
    /** Private atributes: */
    private:
	static const char *o_name;
};

#endif // TSPECIALS_H

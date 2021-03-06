/* -*-c++-*- IFC++ www.ifcquery.com
*
MIT License

Copyright (c) 2017 Fabian Gerold

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include <ifcpp/model/IfcPPBasicTypes.h>
#include "Command.h"

class IfcPlusPlusSystem;
class IfcPPEntity;

class CmdWriteIfcFile : public Command
{

protected:
	std::string m_file_path;

public:
	CmdWriteIfcFile( IfcPlusPlusSystem* system );
	virtual ~CmdWriteIfcFile();
	virtual shared_ptr<Command> copy() { return shared_ptr<CmdWriteIfcFile>( new CmdWriteIfcFile(m_system) ); }
	virtual const char* className() const { return "CmdWriteIfcFile"; }

	virtual bool doCmd();
	virtual bool undo();
	virtual bool redo();

	virtual bool storeInUndoList()	{ return true; }
	virtual bool isUndoable()		{ return true; }
	virtual bool isRepeatable()		{ return false; }

	void setFilePath( std::string& path );
};

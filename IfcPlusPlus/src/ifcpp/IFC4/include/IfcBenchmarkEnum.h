/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcBenchmarkEnum = ENUMERATION OF	(GREATERTHAN	,GREATERTHANOREQUALTO	,LESSTHAN	,LESSTHANOREQUALTO	,EQUALTO	,NOTEQUALTO	,INCLUDES	,NOTINCLUDES	,INCLUDEDIN	,NOTINCLUDEDIN);
class IFCPP_EXPORT IfcBenchmarkEnum : virtual public IfcPPObject
{
public:
	enum IfcBenchmarkEnumEnum
	{
		ENUM_GREATERTHAN,
		ENUM_GREATERTHANOREQUALTO,
		ENUM_LESSTHAN,
		ENUM_LESSTHANOREQUALTO,
		ENUM_EQUALTO,
		ENUM_NOTEQUALTO,
		ENUM_INCLUDES,
		ENUM_NOTINCLUDES,
		ENUM_INCLUDEDIN,
		ENUM_NOTINCLUDEDIN
	};

	IfcBenchmarkEnum();
	IfcBenchmarkEnum( IfcBenchmarkEnumEnum e ) { m_enum = e; }
	~IfcBenchmarkEnum();
	virtual const char* className() const { return "IfcBenchmarkEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcBenchmarkEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcBenchmarkEnumEnum m_enum;
};


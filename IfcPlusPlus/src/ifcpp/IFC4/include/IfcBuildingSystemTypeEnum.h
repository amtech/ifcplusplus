/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcBuildingSystemTypeEnum = ENUMERATION OF	(FENESTRATION	,FOUNDATION	,LOADBEARING	,OUTERSHELL	,SHADING	,TRANSPORT	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcBuildingSystemTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcBuildingSystemTypeEnumEnum
	{
		ENUM_FENESTRATION,
		ENUM_FOUNDATION,
		ENUM_LOADBEARING,
		ENUM_OUTERSHELL,
		ENUM_SHADING,
		ENUM_TRANSPORT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcBuildingSystemTypeEnum();
	IfcBuildingSystemTypeEnum( IfcBuildingSystemTypeEnumEnum e ) { m_enum = e; }
	~IfcBuildingSystemTypeEnum();
	virtual const char* className() const { return "IfcBuildingSystemTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcBuildingSystemTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcBuildingSystemTypeEnumEnum m_enum;
};


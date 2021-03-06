/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcSpaceHeaterTypeEnum = ENUMERATION OF	(CONVECTOR	,RADIATOR	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcSpaceHeaterTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcSpaceHeaterTypeEnumEnum
	{
		ENUM_CONVECTOR,
		ENUM_RADIATOR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcSpaceHeaterTypeEnum();
	IfcSpaceHeaterTypeEnum( IfcSpaceHeaterTypeEnumEnum e ) { m_enum = e; }
	~IfcSpaceHeaterTypeEnum();
	virtual const char* className() const { return "IfcSpaceHeaterTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSpaceHeaterTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcSpaceHeaterTypeEnumEnum m_enum;
};


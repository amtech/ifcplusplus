/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcCrewResourceTypeEnum.h"

// TYPE IfcCrewResourceTypeEnum = ENUMERATION OF	(OFFICE	,SITE	,USERDEFINED	,NOTDEFINED);
IfcCrewResourceTypeEnum::IfcCrewResourceTypeEnum() {}
IfcCrewResourceTypeEnum::~IfcCrewResourceTypeEnum() {}
shared_ptr<IfcPPObject> IfcCrewResourceTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCrewResourceTypeEnum> copy_self( new IfcCrewResourceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCrewResourceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCREWRESOURCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_OFFICE:	stream << ".OFFICE."; break;
		case ENUM_SITE:	stream << ".SITE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCrewResourceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_OFFICE:	return L"OFFICE";
		case ENUM_SITE:	return L"SITE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCrewResourceTypeEnum> IfcCrewResourceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCrewResourceTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCrewResourceTypeEnum>(); }
	shared_ptr<IfcCrewResourceTypeEnum> type_object( new IfcCrewResourceTypeEnum() );
	if( boost::iequals( arg, L".OFFICE." ) )
	{
		type_object->m_enum = IfcCrewResourceTypeEnum::ENUM_OFFICE;
	}
	else if( boost::iequals( arg, L".SITE." ) )
	{
		type_object->m_enum = IfcCrewResourceTypeEnum::ENUM_SITE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCrewResourceTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCrewResourceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}

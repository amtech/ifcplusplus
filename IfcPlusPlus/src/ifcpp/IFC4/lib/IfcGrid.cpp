/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcGrid.h"
#include "ifcpp/IFC4/include/IfcGridAxis.h"
#include "ifcpp/IFC4/include/IfcGridTypeEnum.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcGrid 
IfcGrid::IfcGrid() {}
IfcGrid::IfcGrid( int id ) { m_entity_id = id; }
IfcGrid::~IfcGrid() {}
shared_ptr<IfcPPObject> IfcGrid::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcGrid> copy_self( new IfcGrid() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy(options) ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_UAxes.size(); ++ii )
	{
		auto item_ii = m_UAxes[ii];
		if( item_ii )
		{
			copy_self->m_UAxes.push_back( dynamic_pointer_cast<IfcGridAxis>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_VAxes.size(); ++ii )
	{
		auto item_ii = m_VAxes[ii];
		if( item_ii )
		{
			copy_self->m_VAxes.push_back( dynamic_pointer_cast<IfcGridAxis>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_WAxes.size(); ++ii )
	{
		auto item_ii = m_WAxes[ii];
		if( item_ii )
		{
			copy_self->m_WAxes.push_back( dynamic_pointer_cast<IfcGridAxis>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcGridTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcGrid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCGRID" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_entity_id; } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_UAxes );
	stream << ",";
	writeEntityList( stream, m_VAxes );
	stream << ",";
	writeEntityList( stream, m_WAxes );
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcGrid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcGrid::toString() const { return L"IfcGrid"; }
void IfcGrid::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcGrid, expecting 11, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	readEntityReferenceList( args[7], m_UAxes, map );
	readEntityReferenceList( args[8], m_VAxes, map );
	readEntityReferenceList( args[9], m_WAxes, map );
	m_PredefinedType = IfcGridTypeEnum::createObjectFromSTEP( args[10], map );
}
void IfcGrid::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcProduct::getAttributes( vec_attributes );
	if( m_UAxes.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> UAxes_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_UAxes.begin(), m_UAxes.end(), std::back_inserter( UAxes_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "UAxes", UAxes_vec_object ) );
	}
	if( m_VAxes.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> VAxes_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_VAxes.begin(), m_VAxes.end(), std::back_inserter( VAxes_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "VAxes", VAxes_vec_object ) );
	}
	if( m_WAxes.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> WAxes_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_WAxes.begin(), m_WAxes.end(), std::back_inserter( WAxes_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "WAxes", WAxes_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IfcGrid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcProduct::getAttributesInverse( vec_attributes_inverse );
	if( m_ContainedInStructure_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> ContainedInStructure_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_ContainedInStructure_inverse.size(); ++i )
		{
			if( !m_ContainedInStructure_inverse[i].expired() )
			{
				ContainedInStructure_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelContainedInSpatialStructure>( m_ContainedInStructure_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "ContainedInStructure_inverse", ContainedInStructure_inverse_vec_obj ) );
	}
}
void IfcGrid::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcProduct::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcGrid> ptr_self = dynamic_pointer_cast<IfcGrid>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcGrid::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_UAxes.size(); ++i )
	{
		if( m_UAxes[i] )
		{
			m_UAxes[i]->m_PartOfU_inverse.push_back( ptr_self );
		}
	}
	for( size_t i=0; i<m_VAxes.size(); ++i )
	{
		if( m_VAxes[i] )
		{
			m_VAxes[i]->m_PartOfV_inverse.push_back( ptr_self );
		}
	}
	for( size_t i=0; i<m_WAxes.size(); ++i )
	{
		if( m_WAxes[i] )
		{
			m_WAxes[i]->m_PartOfW_inverse.push_back( ptr_self );
		}
	}
}
void IfcGrid::unlinkFromInverseCounterparts()
{
	IfcProduct::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_UAxes.size(); ++i )
	{
		if( m_UAxes[i] )
		{
			std::vector<weak_ptr<IfcGrid> >& PartOfU_inverse = m_UAxes[i]->m_PartOfU_inverse;
			for( auto it_PartOfU_inverse = PartOfU_inverse.begin(); it_PartOfU_inverse != PartOfU_inverse.end(); )
			{
				shared_ptr<IfcGrid> self_candidate( *it_PartOfU_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfU_inverse= PartOfU_inverse.erase( it_PartOfU_inverse );
				}
				else
				{
					++it_PartOfU_inverse;
				}
			}
		}
	}
	for( size_t i=0; i<m_VAxes.size(); ++i )
	{
		if( m_VAxes[i] )
		{
			std::vector<weak_ptr<IfcGrid> >& PartOfV_inverse = m_VAxes[i]->m_PartOfV_inverse;
			for( auto it_PartOfV_inverse = PartOfV_inverse.begin(); it_PartOfV_inverse != PartOfV_inverse.end(); )
			{
				shared_ptr<IfcGrid> self_candidate( *it_PartOfV_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfV_inverse= PartOfV_inverse.erase( it_PartOfV_inverse );
				}
				else
				{
					++it_PartOfV_inverse;
				}
			}
		}
	}
	for( size_t i=0; i<m_WAxes.size(); ++i )
	{
		if( m_WAxes[i] )
		{
			std::vector<weak_ptr<IfcGrid> >& PartOfW_inverse = m_WAxes[i]->m_PartOfW_inverse;
			for( auto it_PartOfW_inverse = PartOfW_inverse.begin(); it_PartOfW_inverse != PartOfW_inverse.end(); )
			{
				shared_ptr<IfcGrid> self_candidate( *it_PartOfW_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfW_inverse= PartOfW_inverse.erase( it_PartOfW_inverse );
				}
				else
				{
					++it_PartOfW_inverse;
				}
			}
		}
	}
}

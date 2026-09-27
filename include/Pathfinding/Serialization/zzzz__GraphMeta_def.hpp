#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/GraphMeta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphMeta)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Pathfinding::Serialization {
class GraphMeta;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::GraphMeta*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::GraphMeta*, "Pathfinding.Serialization", "GraphMeta");
// Dependencies System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.GraphMeta
class CORDL_TYPE GraphMeta : public ::System::Object {
public:
// Declarations
/// @brief Field graphs, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphs, put=__cordl_internal_set_graphs)) int32_t  graphs;

/// @brief Field guids, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_guids, put=__cordl_internal_set_guids)) ::System::Collections::Generic::List_1<::StringW>*  guids;

/// @brief Field typeNames, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeNames, put=__cordl_internal_set_typeNames)) ::System::Collections::Generic::List_1<::StringW>*  typeNames;

/// @brief Field version, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::System::Version*  version;

/// @brief Method GetGraphType, addr 0x5ed0678, size 0x1ac, virtual false, abstract: false, final false
inline ::System::Type* GetGraphType(int32_t  index, ::ArrayW<::System::Type*>  availableGraphTypes) ;

static inline ::Pathfinding::Serialization::GraphMeta* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_graphs() const;

constexpr int32_t& __cordl_internal_get_graphs() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_guids() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_guids() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_typeNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_typeNames() ;

constexpr ::System::Version* const& __cordl_internal_get_version() const;

constexpr ::System::Version*& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_graphs(int32_t  value) ;

constexpr void __cordl_internal_set_guids(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_typeNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_version(::System::Version*  value) ;

/// @brief Method .ctor, addr 0x5ecdf58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphMeta() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphMeta", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphMeta(GraphMeta && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphMeta", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphMeta(GraphMeta const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21451};

/// @brief Field version, offset: 0x10, size: 0x8, def value: None
 ::System::Version*  ___version;

/// @brief Field graphs, offset: 0x18, size: 0x4, def value: None
 int32_t  ___graphs;

/// @brief Field guids, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___guids;

/// @brief Field typeNames, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___typeNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::GraphMeta, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::GraphMeta, ___graphs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::GraphMeta, ___guids) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::GraphMeta, ___typeNames) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::GraphMeta) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Serialization

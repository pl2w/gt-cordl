#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/GraphSerializationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphSerializationContext)
namespace Pathfinding::Serialization {
class GraphMeta;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
struct Int3;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::GraphSerializationContext*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::GraphSerializationContext*, "Pathfinding.Serialization", "GraphSerializationContext");
// Dependencies Pathfinding.GraphNode, System.Object
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.GraphSerializationContext
class CORDL_TYPE GraphSerializationContext : public ::System::Object {
public:
// Declarations
/// @brief Field graphIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphIndex, put=__cordl_internal_set_graphIndex)) uint32_t  graphIndex;

/// @brief Field id2NodeMapping, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_id2NodeMapping, put=__cordl_internal_set_id2NodeMapping)) ::ArrayW<::Pathfinding::GraphNode*>  id2NodeMapping;

/// @brief Field meta, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_meta, put=__cordl_internal_set_meta)) ::Pathfinding::Serialization::GraphMeta*  meta;

/// @brief Field reader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::IO::BinaryReader*  reader;

/// @brief Field writer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_writer, put=__cordl_internal_set_writer)) ::System::IO::BinaryWriter*  writer;

/// @brief Method DeserializeFloat, addr 0x5ecd7c0, size 0xb0, virtual false, abstract: false, final false
inline float_t DeserializeFloat(float_t  defaultValue) ;

/// @brief Method DeserializeInt, addr 0x5ecd71c, size 0xa4, virtual false, abstract: false, final false
inline int32_t DeserializeInt(int32_t  defaultValue) ;

/// @brief Method DeserializeInt3, addr 0x5ecd678, size 0xa4, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 DeserializeInt3() ;

/// @brief Method DeserializeNodeReference, addr 0x5ecd3f0, size 0x130, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* DeserializeNodeReference() ;

/// @brief Method DeserializeUnityObject, addr 0x5ecd870, size 0x3b0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> DeserializeUnityObject() ;

/// @brief Method DeserializeVector3, addr 0x5ecd590, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DeserializeVector3() ;

static inline ::Pathfinding::Serialization::GraphSerializationContext* New_ctor(::System::IO::BinaryReader*  reader, ::ArrayW<::Pathfinding::GraphNode*>  id2NodeMapping, uint32_t  graphIndex, ::Pathfinding::Serialization::GraphMeta*  meta) ;

static inline ::Pathfinding::Serialization::GraphSerializationContext* New_ctor(::System::IO::BinaryWriter*  writer) ;

/// @brief Method SerializeInt3, addr 0x5ecd608, size 0x70, virtual false, abstract: false, final false
inline void SerializeInt3(::Pathfinding::Int3  v) ;

/// @brief Method SerializeNodeReference, addr 0x5ecd3ac, size 0x44, virtual false, abstract: false, final false
inline void SerializeNodeReference(::Pathfinding::GraphNode*  node) ;

/// @brief Method SerializeVector3, addr 0x5ecd520, size 0x70, virtual false, abstract: false, final false
inline void SerializeVector3(::UnityEngine::Vector3  v) ;

constexpr uint32_t const& __cordl_internal_get_graphIndex() const;

constexpr uint32_t& __cordl_internal_get_graphIndex() ;

constexpr ::ArrayW<::Pathfinding::GraphNode*> const& __cordl_internal_get_id2NodeMapping() const;

constexpr ::ArrayW<::Pathfinding::GraphNode*>& __cordl_internal_get_id2NodeMapping() ;

constexpr ::Pathfinding::Serialization::GraphMeta* const& __cordl_internal_get_meta() const;

constexpr ::Pathfinding::Serialization::GraphMeta*& __cordl_internal_get_meta() ;

constexpr ::System::IO::BinaryReader* const& __cordl_internal_get_reader() const;

constexpr ::System::IO::BinaryReader*& __cordl_internal_get_reader() ;

constexpr ::System::IO::BinaryWriter* const& __cordl_internal_get_writer() const;

constexpr ::System::IO::BinaryWriter*& __cordl_internal_get_writer() ;

constexpr void __cordl_internal_set_graphIndex(uint32_t  value) ;

constexpr void __cordl_internal_set_id2NodeMapping(::ArrayW<::Pathfinding::GraphNode*>  value) ;

constexpr void __cordl_internal_set_meta(::Pathfinding::Serialization::GraphMeta*  value) ;

constexpr void __cordl_internal_set_reader(::System::IO::BinaryReader*  value) ;

constexpr void __cordl_internal_set_writer(::System::IO::BinaryWriter*  value) ;

/// @brief Method .ctor, addr 0x5ecd314, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::IO::BinaryReader*  reader, ::ArrayW<::Pathfinding::GraphNode*>  id2NodeMapping, uint32_t  graphIndex, ::Pathfinding::Serialization::GraphMeta*  meta) ;

/// @brief Method .ctor, addr 0x5ecd37c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::IO::BinaryWriter*  writer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphSerializationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphSerializationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphSerializationContext(GraphSerializationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphSerializationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphSerializationContext(GraphSerializationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21443};

/// @brief Field id2NodeMapping, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GraphNode*>  ___id2NodeMapping;

/// @brief Field reader, offset: 0x18, size: 0x8, def value: None
 ::System::IO::BinaryReader*  ___reader;

/// @brief Field writer, offset: 0x20, size: 0x8, def value: None
 ::System::IO::BinaryWriter*  ___writer;

/// @brief Field graphIndex, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___graphIndex;

/// @brief Field meta, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Serialization::GraphMeta*  ___meta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Serialization::GraphSerializationContext, ___id2NodeMapping) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::GraphSerializationContext, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::GraphSerializationContext, ___writer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::GraphSerializationContext, ___graphIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Serialization::GraphSerializationContext, ___meta) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Serialization::GraphSerializationContext) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Serialization

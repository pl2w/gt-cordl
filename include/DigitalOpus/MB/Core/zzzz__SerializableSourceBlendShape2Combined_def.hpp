#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/SerializableSourceBlendShape2Combined.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableSourceBlendShape2Combined)
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_MBBlendShapeKey;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_MBBlendShapeValue;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class SerializableSourceBlendShape2Combined;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*, "DigitalOpus.MB.Core", "SerializableSourceBlendShape2Combined");
// Dependencies System.Object, UnityEngine.GameObject
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.SerializableSourceBlendShape2Combined
class CORDL_TYPE SerializableSourceBlendShape2Combined : public ::System::Object {
public:
// Declarations
/// @brief Field blendShapeIdx, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendShapeIdx, put=__cordl_internal_set_blendShapeIdx)) ::ArrayW<int32_t>  blendShapeIdx;

/// @brief Field combinedMeshTargetGameObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_combinedMeshTargetGameObject, put=__cordl_internal_set_combinedMeshTargetGameObject)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  combinedMeshTargetGameObject;

/// @brief Field srcBlendShapeIdx, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_srcBlendShapeIdx, put=__cordl_internal_set_srcBlendShapeIdx)) ::ArrayW<int32_t>  srcBlendShapeIdx;

/// @brief Field srcGameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_srcGameObject, put=__cordl_internal_set_srcGameObject)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  srcGameObject;

/// @brief Method DebugPrint, addr 0x9dbe1b8, size 0x29c, virtual false, abstract: false, final false
inline void DebugPrint() ;

/// @brief Method GenerateMapFromSerializedData, addr 0x9dbe454, size 0x2c8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*,::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>* GenerateMapFromSerializedData() ;

static inline ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* New_ctor() ;

/// @brief Method SetBuffers, addr 0x9dbe158, size 0x60, virtual false, abstract: false, final false
inline void SetBuffers(::ArrayW<::UnityEngine::GameObject*>  srcGameObjs, ::ArrayW<int32_t>  srcBlendShapeIdxs, ::ArrayW<::UnityEngine::GameObject*>  targGameObjs, ::ArrayW<int32_t>  targBlendShapeIdx) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_blendShapeIdx() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_blendShapeIdx() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_combinedMeshTargetGameObject() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_combinedMeshTargetGameObject() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_srcBlendShapeIdx() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_srcBlendShapeIdx() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_srcGameObject() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_srcGameObject() ;

constexpr void __cordl_internal_set_blendShapeIdx(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_combinedMeshTargetGameObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_srcBlendShapeIdx(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_srcGameObject(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x9dbd890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableSourceBlendShape2Combined() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableSourceBlendShape2Combined", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableSourceBlendShape2Combined(SerializableSourceBlendShape2Combined && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableSourceBlendShape2Combined", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableSourceBlendShape2Combined(SerializableSourceBlendShape2Combined const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22745};

/// @brief Field srcGameObject, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___srcGameObject;

/// @brief Field srcBlendShapeIdx, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___srcBlendShapeIdx;

/// @brief Field combinedMeshTargetGameObject, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___combinedMeshTargetGameObject;

/// @brief Field blendShapeIdx, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___blendShapeIdx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined, ___srcGameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined, ___srcBlendShapeIdx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined, ___combinedMeshTargetGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined, ___blendShapeIdx) == 0x28, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core

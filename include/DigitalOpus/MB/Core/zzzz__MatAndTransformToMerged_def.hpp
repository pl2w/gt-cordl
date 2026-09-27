#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MatAndTransformToMerged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatAndTransformToMerged)
namespace DigitalOpus::MB::Core {
struct DRect;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MatAndTransformToMerged;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MatAndTransformToMerged*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MatAndTransformToMerged*, "DigitalOpus.MB.Core", "MatAndTransformToMerged");
// Dependencies DigitalOpus.MB.Core.DRect, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MatAndTransformToMerged
class CORDL_TYPE MatAndTransformToMerged : public ::System::Object {
public:
// Declarations
/// @brief Field <materialTiling>k__BackingField, offset 0x58, size 0x20 
 __declspec(property(get=__cordl_internal_get__materialTiling_k__BackingField, put=__cordl_internal_set__materialTiling_k__BackingField)) ::DigitalOpus::MB::Core::DRect  _materialTiling_k__BackingField;

/// @brief Field <obUVRectIfTilingSame>k__BackingField, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get__obUVRectIfTilingSame_k__BackingField, put=__cordl_internal_set__obUVRectIfTilingSame_k__BackingField)) ::DigitalOpus::MB::Core::DRect  _obUVRectIfTilingSame_k__BackingField;

/// @brief Field <samplingRectMatAndUVTiling>k__BackingField, offset 0x38, size 0x20 
 __declspec(property(get=__cordl_internal_get__samplingRectMatAndUVTiling_k__BackingField, put=__cordl_internal_set__samplingRectMatAndUVTiling_k__BackingField)) ::DigitalOpus::MB::Core::DRect  _samplingRectMatAndUVTiling_k__BackingField;

/// @brief Field mat, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mat, put=__cordl_internal_set_mat)) ::UnityW<::UnityEngine::Material>  mat;

 __declspec(property(get=get_materialTiling, put=set_materialTiling)) ::DigitalOpus::MB::Core::DRect  materialTiling;

 __declspec(property(get=get_obUVRectIfTilingSame, put=set_obUVRectIfTilingSame)) ::DigitalOpus::MB::Core::DRect  obUVRectIfTilingSame;

/// @brief Field objName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_objName, put=__cordl_internal_set_objName)) ::StringW  objName;

 __declspec(property(get=get_samplingRectMatAndUVTiling, put=set_samplingRectMatAndUVTiling)) ::DigitalOpus::MB::Core::DRect  samplingRectMatAndUVTiling;

/// @brief Method AssignInitialValuesForMaterialTilingAndSamplingRectMatAndUVTiling, addr 0x9dce748, size 0x84, virtual false, abstract: false, final false
inline void AssignInitialValuesForMaterialTilingAndSamplingRectMatAndUVTiling(bool  allTexturesUseSameMatTiling, ::DigitalOpus::MB::Core::DRect  matTiling) ;

/// @brief Method Equals, addr 0x9dce518, size 0xe4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9dce5fc, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMaterialName, addr 0x9dce67c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW GetMaterialName() ;

static inline ::DigitalOpus::MB::Core::MatAndTransformToMerged* New_ctor(::DigitalOpus::MB::Core::DRect  obUVrect, bool  fixOutOfBoundsUVs) ;

static inline ::DigitalOpus::MB::Core::MatAndTransformToMerged* New_ctor(::DigitalOpus::MB::Core::DRect  obUVrect, bool  fixOutOfBoundsUVs, ::UnityEngine::Material*  m) ;

constexpr ::DigitalOpus::MB::Core::DRect const& __cordl_internal_get__materialTiling_k__BackingField() const;

constexpr ::DigitalOpus::MB::Core::DRect& __cordl_internal_get__materialTiling_k__BackingField() ;

constexpr ::DigitalOpus::MB::Core::DRect const& __cordl_internal_get__obUVRectIfTilingSame_k__BackingField() const;

constexpr ::DigitalOpus::MB::Core::DRect& __cordl_internal_get__obUVRectIfTilingSame_k__BackingField() ;

constexpr ::DigitalOpus::MB::Core::DRect const& __cordl_internal_get__samplingRectMatAndUVTiling_k__BackingField() const;

constexpr ::DigitalOpus::MB::Core::DRect& __cordl_internal_get__samplingRectMatAndUVTiling_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mat() ;

constexpr ::StringW const& __cordl_internal_get_objName() const;

constexpr ::StringW& __cordl_internal_get_objName() ;

constexpr void __cordl_internal_set__materialTiling_k__BackingField(::DigitalOpus::MB::Core::DRect  value) ;

constexpr void __cordl_internal_set__obUVRectIfTilingSame_k__BackingField(::DigitalOpus::MB::Core::DRect  value) ;

constexpr void __cordl_internal_set__samplingRectMatAndUVTiling_k__BackingField(::DigitalOpus::MB::Core::DRect  value) ;

constexpr void __cordl_internal_set_mat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_objName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9dce3e8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::DRect  obUVrect, bool  fixOutOfBoundsUVs) ;

/// @brief Method .ctor, addr 0x9dce4b4, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::DRect  obUVrect, bool  fixOutOfBoundsUVs, ::UnityEngine::Material*  m) ;

/// @brief Method _init, addr 0x9dce448, size 0x6c, virtual false, abstract: false, final false
inline void _init(::DigitalOpus::MB::Core::DRect  obUVrect, bool  fixOutOfBoundsUVs, ::UnityEngine::Material*  m) ;

/// [CompilerGenerated]
/// @brief Method get_materialTiling, addr 0x9dce3d0, size 0xc, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DRect get_materialTiling() ;

/// [CompilerGenerated]
/// @brief Method get_obUVRectIfTilingSame, addr 0x9dce3a0, size 0xc, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DRect get_obUVRectIfTilingSame() ;

/// [CompilerGenerated]
/// @brief Method get_samplingRectMatAndUVTiling, addr 0x9dce3b8, size 0xc, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DRect get_samplingRectMatAndUVTiling() ;

/// [CompilerGenerated]
/// @brief Method set_materialTiling, addr 0x9dce3dc, size 0xc, virtual false, abstract: false, final false
inline void set_materialTiling(::DigitalOpus::MB::Core::DRect  value) ;

/// [CompilerGenerated]
/// @brief Method set_obUVRectIfTilingSame, addr 0x9dce3ac, size 0xc, virtual false, abstract: false, final false
inline void set_obUVRectIfTilingSame(::DigitalOpus::MB::Core::DRect  value) ;

/// [CompilerGenerated]
/// @brief Method set_samplingRectMatAndUVTiling, addr 0x9dce3c4, size 0xc, virtual false, abstract: false, final false
inline void set_samplingRectMatAndUVTiling(::DigitalOpus::MB::Core::DRect  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatAndTransformToMerged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatAndTransformToMerged", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatAndTransformToMerged(MatAndTransformToMerged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatAndTransformToMerged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatAndTransformToMerged(MatAndTransformToMerged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22779};

/// @brief Field mat, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mat;

/// [CompilerGenerated]
/// @brief Field <obUVRectIfTilingSame>k__BackingField, offset: 0x18, size: 0x20, def value: None
 ::DigitalOpus::MB::Core::DRect  ____obUVRectIfTilingSame_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <samplingRectMatAndUVTiling>k__BackingField, offset: 0x38, size: 0x20, def value: None
 ::DigitalOpus::MB::Core::DRect  ____samplingRectMatAndUVTiling_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <materialTiling>k__BackingField, offset: 0x58, size: 0x20, def value: None
 ::DigitalOpus::MB::Core::DRect  ____materialTiling_k__BackingField;

/// @brief Field objName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___objName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MatAndTransformToMerged, ___mat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MatAndTransformToMerged, ____obUVRectIfTilingSame_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MatAndTransformToMerged, ____samplingRectMatAndUVTiling_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MatAndTransformToMerged, ____materialTiling_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MatAndTransformToMerged, ___objName) == 0x78, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MatAndTransformToMerged) == 0x80, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core

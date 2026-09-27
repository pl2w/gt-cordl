#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKTrackable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_TrackableType_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKTrackable)
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRBounded2D;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUKTrackable;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKTrackable*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKTrackable*, "Meta.XR.MRUtilityKit", "MRUKTrackable");
// [Feature((Meta.XR.Util.Feature)9)]
// Dependencies Meta.XR.MRUtilityKit.MRUKAnchor, OVRAnchor::TrackableType
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKTrackable
class CORDL_TYPE MRUKTrackable : public ::Meta::XR::MRUtilityKit::MRUKAnchor {
public:
// Declarations
 __declspec(property(get=get_IsTracked, put=set_IsTracked)) bool  IsTracked;

 __declspec(property(get=get_MarkerPayloadBytes, put=set_MarkerPayloadBytes)) ::ArrayW<uint8_t>  MarkerPayloadBytes;

 __declspec(property(get=get_MarkerPayloadString, put=set_MarkerPayloadString)) ::StringW  MarkerPayloadString;

 __declspec(property(get=get_TrackableType, put=set_TrackableType)) ::GlobalNamespace::OVRAnchor_TrackableType  TrackableType;

/// @brief Field <IsTracked>k__BackingField, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsTracked_k__BackingField, put=__cordl_internal_set__IsTracked_k__BackingField)) bool  _IsTracked_k__BackingField;

/// @brief Field <MarkerPayloadBytes>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MarkerPayloadBytes_k__BackingField, put=__cordl_internal_set__MarkerPayloadBytes_k__BackingField)) ::ArrayW<uint8_t>  _MarkerPayloadBytes_k__BackingField;

/// @brief Field <MarkerPayloadString>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MarkerPayloadString_k__BackingField, put=__cordl_internal_set__MarkerPayloadString_k__BackingField)) ::StringW  _MarkerPayloadString_k__BackingField;

/// @brief Field <TrackableType>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__TrackableType_k__BackingField, put=__cordl_internal_set__TrackableType_k__BackingField)) ::GlobalNamespace::OVRAnchor_TrackableType  _TrackableType_k__BackingField;

static inline ::Meta::XR::MRUtilityKit::MRUKTrackable* New_ctor() ;

/// @brief Method OnFetch, addr 0x9f2fcc4, size 0x7fc, virtual false, abstract: false, final false
inline void OnFetch() ;

/// @brief Method OnInstantiate, addr 0x9f2dfe0, size 0x1c, virtual false, abstract: false, final false
inline void OnInstantiate(::GlobalNamespace::OVRAnchor  anchor) ;

/// [CompilerGenerated]
/// @brief Method <OnFetch>g__GetUpdatedBoundary|16_0, addr 0x9f3a800, size 0x390, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _OnFetch_g__GetUpdatedBoundary_16_0(::GlobalNamespace::OVRBounded2D  component, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  currentBoundary) ;

constexpr bool const& __cordl_internal_get__IsTracked_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsTracked_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__MarkerPayloadBytes_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__MarkerPayloadBytes_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MarkerPayloadString_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MarkerPayloadString_k__BackingField() ;

constexpr ::GlobalNamespace::OVRAnchor_TrackableType const& __cordl_internal_get__TrackableType_k__BackingField() const;

constexpr ::GlobalNamespace::OVRAnchor_TrackableType& __cordl_internal_get__TrackableType_k__BackingField() ;

constexpr void __cordl_internal_set__IsTracked_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MarkerPayloadBytes_k__BackingField(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__MarkerPayloadString_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TrackableType_k__BackingField(::GlobalNamespace::OVRAnchor_TrackableType  value) ;

/// @brief Method .ctor, addr 0x9f3ab90, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsTracked, addr 0x9f3a7d0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsTracked() ;

/// [CompilerGenerated]
/// @brief Method get_MarkerPayloadBytes, addr 0x9f3a7f0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_MarkerPayloadBytes() ;

/// [CompilerGenerated]
/// @brief Method get_MarkerPayloadString, addr 0x9f3a7e0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MarkerPayloadString() ;

/// [CompilerGenerated]
/// @brief Method get_TrackableType, addr 0x9f3a7c0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor_TrackableType get_TrackableType() ;

/// [CompilerGenerated]
/// @brief Method set_IsTracked, addr 0x9f3a7d8, size 0x8, virtual false, abstract: false, final false
inline void set_IsTracked(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MarkerPayloadBytes, addr 0x9f3a7f8, size 0x8, virtual false, abstract: false, final false
inline void set_MarkerPayloadBytes(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_MarkerPayloadString, addr 0x9f3a7e8, size 0x8, virtual false, abstract: false, final false
inline void set_MarkerPayloadString(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackableType, addr 0x9f3a7c8, size 0x8, virtual false, abstract: false, final false
inline void set_TrackableType(::GlobalNamespace::OVRAnchor_TrackableType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKTrackable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKTrackable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKTrackable(MRUKTrackable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKTrackable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKTrackable(MRUKTrackable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25894};

/// [CompilerGenerated]
/// @brief Field <TrackableType>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::OVRAnchor_TrackableType  ____TrackableType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsTracked>k__BackingField, offset: 0xa4, size: 0x1, def value: None
 bool  ____IsTracked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MarkerPayloadString>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ____MarkerPayloadString_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MarkerPayloadBytes>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____MarkerPayloadBytes_k__BackingField;

/// @brief Size padding 0xc8 - 0xb8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKTrackable, ____TrackableType_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKTrackable, ____IsTracked_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKTrackable, ____MarkerPayloadString_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKTrackable, ____MarkerPayloadBytes_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKTrackable) == 0xc8, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit

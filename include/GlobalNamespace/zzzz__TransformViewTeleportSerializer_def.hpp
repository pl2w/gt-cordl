#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformViewTeleportSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
CORDL_MODULE_EXPORT(TransformViewTeleportSerializer)
namespace Fusion {
struct NetworkBool;
}
namespace GlobalNamespace {
class GorillaNetworkTransform;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformViewTeleportSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformViewTeleportSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformViewTeleportSerializer*, "", "TransformViewTeleportSerializer");
// [NetworkBehaviourWeaved(1)]
// Dependencies Fusion.NetworkBool, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformViewTeleportSerializer
class CORDL_TYPE TransformViewTeleportSerializer : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_Data, put=set_Data)) ::Fusion::NetworkBool  Data;

/// @brief Field _Data, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::Fusion::NetworkBool  _Data;

/// @brief Field transformView, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformView, put=__cordl_internal_set_transformView)) ::UnityW<::GlobalNamespace::GorillaNetworkTransform>  transformView;

/// @brief Field willTeleport, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_willTeleport, put=__cordl_internal_set_willTeleport)) bool  willTeleport;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5ab3248, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5ab3268, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::TransformViewTeleportSerializer* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x5ab30f4, size 0x3c, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5ab31ac, size 0x94, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetWillTeleport, addr 0x5ab3004, size 0xc, virtual false, abstract: false, final false
inline void SetWillTeleport() ;

/// @brief Method Start, addr 0x5ab2fa0, size 0x64, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method WriteDataFusion, addr 0x5ab30c8, size 0x2c, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5ab3130, size 0x7c, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get__Data() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get__Data() ;

constexpr ::UnityW<::GlobalNamespace::GorillaNetworkTransform> const& __cordl_internal_get_transformView() const;

constexpr ::UnityW<::GlobalNamespace::GorillaNetworkTransform>& __cordl_internal_get_transformView() ;

constexpr bool const& __cordl_internal_get_willTeleport() const;

constexpr bool& __cordl_internal_get_willTeleport() ;

constexpr void __cordl_internal_set__Data(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_transformView(::UnityW<::GlobalNamespace::GorillaNetworkTransform>  value) ;

constexpr void __cordl_internal_set_willTeleport(bool  value) ;

/// @brief Method .ctor, addr 0x5ab3240, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5ab3010, size 0x5c, virtual false, abstract: false, final false
inline ::Fusion::NetworkBool get_Data() ;

/// @brief Method set_Data, addr 0x5ab306c, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::Fusion::NetworkBool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformViewTeleportSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformViewTeleportSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformViewTeleportSerializer(TransformViewTeleportSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformViewTeleportSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformViewTeleportSerializer(TransformViewTeleportSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3300};

/// @brief Field willTeleport, offset: 0x9b, size: 0x1, def value: None
 bool  ___willTeleport;

/// @brief Field transformView, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaNetworkTransform>  ___transformView;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xa8, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformViewTeleportSerializer, ___willTeleport) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformViewTeleportSerializer, ___transformView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformViewTeleportSerializer, ____Data) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformViewTeleportSerializer) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace

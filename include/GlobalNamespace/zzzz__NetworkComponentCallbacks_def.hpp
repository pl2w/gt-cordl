#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkComponentCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
CORDL_MODULE_EXPORT(NetworkComponentCallbacks)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkComponentCallbacks;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkComponentCallbacks*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkComponentCallbacks*, "", "NetworkComponentCallbacks");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkComponentCallbacks
class CORDL_TYPE NetworkComponentCallbacks : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// @brief Field ReadData, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReadData, put=__cordl_internal_set_ReadData)) ::System::Action*  ReadData;

/// @brief Field ReadPunData, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReadPunData, put=__cordl_internal_set_ReadPunData)) ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  ReadPunData;

/// @brief Field WriteData, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WriteData, put=__cordl_internal_set_WriteData)) ::System::Action*  WriteData;

/// @brief Field WritePunData, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WritePunData, put=__cordl_internal_set_WritePunData)) ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  WritePunData;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x56e8978, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x56e897c, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::NetworkComponentCallbacks* New_ctor() ;

/// @brief Method ReadDataFusion, addr 0x56e88a8, size 0x20, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x56e88e8, size 0x44, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x56e88c8, size 0x20, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x56e892c, size 0x44, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::System::Action* const& __cordl_internal_get_ReadData() const;

constexpr ::System::Action*& __cordl_internal_get_ReadData() ;

constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>* const& __cordl_internal_get_ReadPunData() const;

constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*& __cordl_internal_get_ReadPunData() ;

constexpr ::System::Action* const& __cordl_internal_get_WriteData() const;

constexpr ::System::Action*& __cordl_internal_get_WriteData() ;

constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>* const& __cordl_internal_get_WritePunData() const;

constexpr ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*& __cordl_internal_get_WritePunData() ;

constexpr void __cordl_internal_set_ReadData(::System::Action*  value) ;

constexpr void __cordl_internal_set_ReadPunData(::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  value) ;

constexpr void __cordl_internal_set_WriteData(::System::Action*  value) ;

constexpr void __cordl_internal_set_WritePunData(::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  value) ;

/// @brief Method .ctor, addr 0x56e8970, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkComponentCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkComponentCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkComponentCallbacks(NetworkComponentCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkComponentCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkComponentCallbacks(NetworkComponentCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1116};

/// @brief Field ReadData, offset: 0xa0, size: 0x8, def value: None
 ::System::Action*  ___ReadData;

/// @brief Field WriteData, offset: 0xa8, size: 0x8, def value: None
 ::System::Action*  ___WriteData;

/// @brief Field ReadPunData, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  ___ReadPunData;

/// @brief Field WritePunData, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_2<::Photon::Pun::PhotonStream*,::Photon::Pun::PhotonMessageInfo>*  ___WritePunData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkComponentCallbacks, ___ReadData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkComponentCallbacks, ___WriteData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkComponentCallbacks, ___ReadPunData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkComponentCallbacks, ___WritePunData) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkComponentCallbacks) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace

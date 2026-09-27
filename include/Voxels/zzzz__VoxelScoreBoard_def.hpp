#pragma once
// IWYU pragma private; include "Voxels/VoxelScoreBoard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelScoreBoard)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct VoxelScoreBoard_VoxelScoreEntry;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
namespace Voxels {
class VoxelMaterialSet;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class VoxelScoreBoard;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelScoreBoard*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelScoreBoard*, "Voxels", "VoxelScoreBoard");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponent
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelScoreBoard
class CORDL_TYPE VoxelScoreBoard : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using VoxelScoreEntry = ::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry;

/// @brief Field _entries, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__entries, put=__cordl_internal_set__entries)) ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>*  _entries;

/// @brief Field _materialNames, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialNames, put=__cordl_internal_set__materialNames)) ::ArrayW<::StringW>  _materialNames;

/// @brief Field columnOffset, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_columnOffset, put=__cordl_internal_set_columnOffset)) int32_t  columnOffset;

/// @brief Field columnWidth, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_columnWidth, put=__cordl_internal_set_columnWidth)) int32_t  columnWidth;

/// @brief Field lineLength, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineLength, put=__cordl_internal_set_lineLength)) int32_t  lineLength;

/// @brief Field materialSet, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialSet, put=__cordl_internal_set_materialSet)) ::UnityW<::Voxels::VoxelMaterialSet>  materialSet;

/// @brief Field nameWidth, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_nameWidth, put=__cordl_internal_set_nameWidth)) int32_t  nameWidth;

/// @brief Field sb, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::System::Text::StringBuilder*  sb;

/// @brief Field text, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::TMPro::TMP_Text>  text;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5dcfb58, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5dcfb60, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetScoreLine, addr 0x5dcf614, size 0x150, virtual false, abstract: false, final false
inline int32_t GetScoreLine(::GlobalNamespace::NetPlayer*  player) ;

static inline ::Voxels::VoxelScoreBoard* New_ctor() ;

/// @brief Method OnDisable, addr 0x5dcf168, size 0x334, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5dcee34, size 0x334, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoinedRoom, addr 0x5dcf49c, size 0x178, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x5dcf764, size 0x54, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5dcf7b8, size 0x38, virtual false, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5dcf7f0, size 0xf4, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnResourcesMined, addr 0x5dcf8f0, size 0x124, virtual false, abstract: false, final false
inline void OnResourcesMined(::GlobalNamespace::NetPlayer*  player, ::Voxels::VoxelWorld*  world, ::ArrayW<int32_t>  resources) ;

/// @brief Method ReadDataFusion, addr 0x5dce978, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5dceb84, size 0x2b0, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Start, addr 0x5dce254, size 0xf0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateDisplay, addr 0x5dce344, size 0x474, virtual false, abstract: false, final false
inline void UpdateDisplay() ;

/// @brief Method WriteDataFusion, addr 0x5dce974, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5dce97c, size 0x208, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [CompilerGenerated]
/// @brief Method <UpdateDisplay>g__AddTextRight|11_1, addr 0x5dce8a4, size 0xd0, virtual false, abstract: false, final false
inline void _UpdateDisplay_g__AddTextRight_11_1(::StringW  text, int32_t  length) ;

/// [CompilerGenerated]
/// @brief Method <UpdateDisplay>g__AddText|11_0, addr 0x5dce7b8, size 0xec, virtual false, abstract: false, final false
inline void _UpdateDisplay_g__AddText_11_0(::StringW  text, int32_t  length) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>* const& __cordl_internal_get__entries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>*& __cordl_internal_get__entries() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__materialNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__materialNames() ;

constexpr int32_t const& __cordl_internal_get_columnOffset() const;

constexpr int32_t& __cordl_internal_get_columnOffset() ;

constexpr int32_t const& __cordl_internal_get_columnWidth() const;

constexpr int32_t& __cordl_internal_get_columnWidth() ;

constexpr int32_t const& __cordl_internal_get_lineLength() const;

constexpr int32_t& __cordl_internal_get_lineLength() ;

constexpr ::UnityW<::Voxels::VoxelMaterialSet> const& __cordl_internal_get_materialSet() const;

constexpr ::UnityW<::Voxels::VoxelMaterialSet>& __cordl_internal_get_materialSet() ;

constexpr int32_t const& __cordl_internal_get_nameWidth() const;

constexpr int32_t& __cordl_internal_get_nameWidth() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_sb() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_sb() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set__entries(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>*  value) ;

constexpr void __cordl_internal_set__materialNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_columnOffset(int32_t  value) ;

constexpr void __cordl_internal_set_columnWidth(int32_t  value) ;

constexpr void __cordl_internal_set_lineLength(int32_t  value) ;

constexpr void __cordl_internal_set_materialSet(::UnityW<::Voxels::VoxelMaterialSet>  value) ;

constexpr void __cordl_internal_set_nameWidth(int32_t  value) ;

constexpr void __cordl_internal_set_sb(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5dcfa88, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelScoreBoard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelScoreBoard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelScoreBoard(VoxelScoreBoard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelScoreBoard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelScoreBoard(VoxelScoreBoard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5077};

/// [SerializeField]
/// @brief Field materialSet, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelMaterialSet>  ___materialSet;

/// [SerializeField]
/// @brief Field text, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___text;

/// @brief Field _materialNames, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____materialNames;

/// @brief Field _entries, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelScoreBoard_VoxelScoreEntry>*  ____entries;

/// @brief Field sb, offset: 0xc0, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___sb;

/// @brief Field lineLength, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___lineLength;

/// @brief Field nameWidth, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___nameWidth;

/// @brief Field columnWidth, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___columnWidth;

/// @brief Field columnOffset, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___columnOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelScoreBoard, ___materialSet) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ___text) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ____materialNames) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ____entries) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ___sb) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ___lineLength) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ___nameWidth) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ___columnWidth) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelScoreBoard, ___columnOffset) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelScoreBoard) == 0xd8, "Size mismatch!");

} // namespace end def Voxels

#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintbrawlData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@20_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaintbrawlData)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace GlobalNamespace {
struct GorillaPaintbrawlManager_PaintbrawlStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct PaintbrawlData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PaintbrawlData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaintbrawlData, "", "PaintbrawlData");
// [NetworkStructWeaved(61)]
// Dependencies Fusion.CodeGen.FixedStorage@20, GorillaPaintbrawlManager::PaintbrawlState
namespace GlobalNamespace {
// Is value type: true
// CS Name: PaintbrawlData
#pragma pack(push, 0)
struct CORDL_TYPE PaintbrawlData {
public:
// Declarations
/// @brief Field _playerActorNumberArray, offset 0x54, size 0x50 
 __declspec(property(get=__cordl_internal_get__playerActorNumberArray, put=__cordl_internal_set__playerActorNumberArray)) ::Fusion::CodeGen::FixedStorage@20  _playerActorNumberArray;

/// @brief Field _playerLivesArray, offset 0x4, size 0x50 
 __declspec(property(get=__cordl_internal_get__playerLivesArray, put=__cordl_internal_set__playerLivesArray)) ::Fusion::CodeGen::FixedStorage@20  _playerLivesArray;

/// @brief Field _playerStatusArray, offset 0xa4, size 0x50 
 __declspec(property(get=__cordl_internal_get__playerStatusArray, put=__cordl_internal_set__playerStatusArray)) ::Fusion::CodeGen::FixedStorage@20  _playerStatusArray;

/// @brief Field currentPaintbrawlState, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPaintbrawlState, put=__cordl_internal_set_currentPaintbrawlState)) ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  currentPaintbrawlState;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeavedArray(20, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(21, 20)]
 __declspec(property(get=get_playerActorNumberArray)) ::Fusion::NetworkArray_1<int32_t>  playerActorNumberArray;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeavedArray(20, 1, typeof(Fusion.ElementReaderWriterInt32))]
/// @brief [NetworkedWeaved(1, 20)]
 __declspec(property(get=get_playerLivesArray)) ::Fusion::NetworkArray_1<int32_t>  playerLivesArray;

/// [Networked]
/// [Capacity(20)]
/// [NetworkedWeavedArray(20, 1, typeof(Fusion.CodeGen.ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus))]
/// @brief [NetworkedWeaved(41, 20)]
 __declspec(property(get=get_playerStatusArray)) ::Fusion::NetworkArray_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  playerStatusArray;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@20 const& __cordl_internal_get__playerActorNumberArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@20& __cordl_internal_get__playerActorNumberArray() ;

constexpr ::Fusion::CodeGen::FixedStorage@20 const& __cordl_internal_get__playerLivesArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@20& __cordl_internal_get__playerLivesArray() ;

constexpr ::Fusion::CodeGen::FixedStorage@20 const& __cordl_internal_get__playerStatusArray() const;

constexpr ::Fusion::CodeGen::FixedStorage@20& __cordl_internal_get__playerStatusArray() ;

constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const& __cordl_internal_get_currentPaintbrawlState() const;

constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState& __cordl_internal_get_currentPaintbrawlState() ;

constexpr void __cordl_internal_set__playerActorNumberArray(::Fusion::CodeGen::FixedStorage@20  value) ;

constexpr void __cordl_internal_set__playerLivesArray(::Fusion::CodeGen::FixedStorage@20  value) ;

constexpr void __cordl_internal_set__playerStatusArray(::Fusion::CodeGen::FixedStorage@20  value) ;

constexpr void __cordl_internal_set_currentPaintbrawlState(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  value) ;

/// @brief Method get_playerActorNumberArray, addr 0x579b31c, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_playerActorNumberArray() ;

/// @brief Method get_playerLivesArray, addr 0x579b23c, size 0xe0, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_playerLivesArray() ;

/// @brief Method get_playerStatusArray, addr 0x579b3fc, size 0x7c, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> get_playerStatusArray() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr PaintbrawlData() ;

// Ctor Parameters [CppParam { name: "currentPaintbrawlState", ty: "::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerLivesArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerActorNumberArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerStatusArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: None, comment: None }]
constexpr PaintbrawlData(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  currentPaintbrawlState, ::Fusion::CodeGen::FixedStorage@20  _playerLivesArray, ::Fusion::CodeGen::FixedStorage@20  _playerActorNumberArray, ::Fusion::CodeGen::FixedStorage@20  _playerStatusArray) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___currentPaintbrawlState_padding[0x0];
/// @brief Field currentPaintbrawlState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  ___currentPaintbrawlState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___currentPaintbrawlState_padding_forAlignment[0x0];
/// @brief Field currentPaintbrawlState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  ___currentPaintbrawlState_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____playerLivesArray_padding[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerLivesArray, offset: 0x4, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____playerLivesArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____playerLivesArray_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerLivesArray, offset: 0x4, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____playerLivesArray_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x54
 uint8_t  ____playerActorNumberArray_padding[0x54];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerActorNumberArray, offset: 0x54, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____playerActorNumberArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x54 for alignment
 uint8_t  ____playerActorNumberArray_padding_forAlignment[0x54];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt32), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerActorNumberArray, offset: 0x54, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____playerActorNumberArray_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa4
 uint8_t  ____playerStatusArray_padding[0xa4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerStatusArray, offset: 0xa4, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____playerStatusArray;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa4 for alignment
 uint8_t  ____playerStatusArray_padding_forAlignment[0xa4];
/// [FixedBufferProperty(typeof(Fusion.NetworkArray`1<T>), typeof(Fusion.CodeGen.UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus), 20, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _playerStatusArray, offset: 0xa4, size: 0x50, def value: None
 ::Fusion::CodeGen::FixedStorage@20  ____playerStatusArray_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1482};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PaintbrawlData) == 0xf4, "Size mismatch!");

} // namespace end def GlobalNamespace

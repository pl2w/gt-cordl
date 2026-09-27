#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionPlayer;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer, "Fusion.CodeGen", "ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x9f663a4, size 0x10c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x9f6639c, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x9f63ccc, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x9f6634c, size 0x20, virtual true, abstract: false, final true
inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x9f6636c, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x9f6637c, size 0x20, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* i___Fusion__IElementReaderWriter_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionPlayer_() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31196};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

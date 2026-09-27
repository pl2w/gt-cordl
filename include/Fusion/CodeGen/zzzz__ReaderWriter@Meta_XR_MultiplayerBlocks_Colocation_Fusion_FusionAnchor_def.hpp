#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionAnchor;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor, "Fusion.CodeGen", "ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x9f662b0, size 0x9c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x9f662a8, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x9f63b94, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x9f66268, size 0x18, virtual true, abstract: false, final true
inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x9f66280, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x9f66290, size 0x18, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* i___Fusion__IElementReaderWriter_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionAnchor_() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31195};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace GlobalNamespace {
struct GorillaPaintbrawlManager_PaintbrawlStatus;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus, "Fusion.CodeGen", "ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x5e2f238, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x5e2f230, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x5e2f254, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x5e2f20c, size 0xc, virtual true, abstract: false, final true
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x5e2f218, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x5e2f224, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  val) ;

static inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>"
constexpr ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* i___Fusion__IElementReaderWriter_1___GlobalNamespace__GorillaPaintbrawlManager_PaintbrawlStatus_() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

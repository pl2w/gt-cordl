#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@BarrelCannon__BarrelCannonState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@BarrelCannon__BarrelCannonState)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace GlobalNamespace {
struct BarrelCannon_BarrelCannonState;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@BarrelCannon__BarrelCannonState;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState, "Fusion.CodeGen", "ReaderWriter@BarrelCannon__BarrelCannonState");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@BarrelCannon__BarrelCannonState
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@BarrelCannon__BarrelCannonState {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x5e2e97c, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::GlobalNamespace::BarrelCannon_BarrelCannonState  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x5e2e974, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x5e2e998, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x5e2e950, size 0xc, virtual true, abstract: false, final true
inline ::GlobalNamespace::BarrelCannon_BarrelCannonState Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x5e2e95c, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::GlobalNamespace::BarrelCannon_BarrelCannonState> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x5e2e968, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::GlobalNamespace::BarrelCannon_BarrelCannonState  val) ;

static inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>"
constexpr ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>* i___Fusion__IElementReaderWriter_1___GlobalNamespace__BarrelCannon_BarrelCannonState_() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::GlobalNamespace::BarrelCannon_BarrelCannonState>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@BarrelCannon__BarrelCannonState() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@BarrelCannon__BarrelCannonState) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

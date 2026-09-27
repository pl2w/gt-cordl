#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@BatteryChargerState__FusionCrankData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@BatteryChargerState__FusionCrankData)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace GlobalNamespace {
struct BatteryChargerState_FusionCrankData;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@BatteryChargerState__FusionCrankData;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData, "Fusion.CodeGen", "ReaderWriter@BatteryChargerState__FusionCrankData");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@BatteryChargerState__FusionCrankData
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@BatteryChargerState__FusionCrankData {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x5e2fc7c, size 0x94, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::GlobalNamespace::BatteryChargerState_FusionCrankData  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x5e2fc74, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x5e2fd10, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x5e2fc34, size 0x18, virtual true, abstract: false, final true
inline ::GlobalNamespace::BatteryChargerState_FusionCrankData Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x5e2fc4c, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::GlobalNamespace::BatteryChargerState_FusionCrankData> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x5e2fc5c, size 0x18, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::GlobalNamespace::BatteryChargerState_FusionCrankData  val) ;

static inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>"
constexpr ::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>* i___Fusion__IElementReaderWriter_1___GlobalNamespace__BatteryChargerState_FusionCrankData_() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::GlobalNamespace::BatteryChargerState_FusionCrankData>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@BatteryChargerState__FusionCrankData() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@BatteryChargerState__FusionCrankData) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

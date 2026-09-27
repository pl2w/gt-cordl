#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@Fusion_NetworkString_1_Fusion__32_.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@Fusion_NetworkString_1_Fusion__32_)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _32;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@Fusion_NetworkString_1_Fusion__32_;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__32_);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__32_, "Fusion.CodeGen", "ReaderWriter@Fusion_NetworkString`1<Fusion__32>");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__32>
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@Fusion_NetworkString_1_Fusion__32_ {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x5e2eb14, size 0x48, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Fusion::NetworkString_1<::Fusion::_32>  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x5e2eb0c, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x5e2eb5c, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x5e2eacc, size 0x18, virtual true, abstract: false, final true
inline ::Fusion::NetworkString_1<::Fusion::_32> Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x5e2eae4, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::NetworkString_1<::Fusion::_32>> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x5e2eaf4, size 0x18, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkString_1<::Fusion::_32>  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>* i___Fusion__IElementReaderWriter_1___Fusion__NetworkString_1___Fusion___32__() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_32>>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@Fusion_NetworkString_1_Fusion__32_() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__32_) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

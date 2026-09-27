#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@Fusion_NetworkString_1_Fusion__128_.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@Fusion_NetworkString_1_Fusion__128_)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _128;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@Fusion_NetworkString_1_Fusion__128_;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_, "Fusion.CodeGen", "ReaderWriter@Fusion_NetworkString`1<Fusion__128>");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__128>
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@Fusion_NetworkString_1_Fusion__128_ {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x5e2f5d8, size 0x48, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::Fusion::NetworkString_1<::Fusion::_128>  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x5e2f5d0, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x5e2f620, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x5e2f590, size 0x18, virtual true, abstract: false, final true
inline ::Fusion::NetworkString_1<::Fusion::_128> Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x5e2f5a8, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Fusion::NetworkString_1<::Fusion::_128>> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x5e2f5b8, size 0x18, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkString_1<::Fusion::_128>  val) ;

static inline ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>"
constexpr ::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>* i___Fusion__IElementReaderWriter_1___Fusion__NetworkString_1___Fusion___128__() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::Fusion::NetworkString_1<::Fusion::_128>>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@Fusion_NetworkString_1_Fusion__128_() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

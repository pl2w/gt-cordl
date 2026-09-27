#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@UnityEngine_Quaternion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriter@UnityEngine_Quaternion)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct ReaderWriter@UnityEngine_Quaternion;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion, "Fusion.CodeGen", "ReaderWriter@UnityEngine_Quaternion");
// [WeaverGenerated]
// Dependencies 
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.ReaderWriter@UnityEngine_Quaternion
#pragma pack(push, 0)
struct CORDL_TYPE ReaderWriter@UnityEngine_Quaternion {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*  Instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementHashCode, addr 0x5e2ee08, size 0x78, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::UnityEngine::Quaternion  val) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetElementWordCount, addr 0x5e2ee00, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method GetInstance, addr 0x5e2ee80, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>* GetInstance() ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Read, addr 0x5e2edcc, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion Read(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method ReadRef, addr 0x5e2ede0, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::UnityEngine::Quaternion> ReadRef(uint8_t*  data, int32_t  index) ;

/// [MethodImpl((System.Runtime.CompilerServices.MethodImplOptions)256)]
/// [WeaverGenerated]
/// @brief Method Write, addr 0x5e2edec, size 0x14, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::UnityEngine::Quaternion  val) ;

static inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>* getStaticF_Instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>* i___Fusion__IElementReaderWriter_1___UnityEngine__Quaternion_() ;

static inline void setStaticF_Instance(::Fusion::IElementReaderWriter_1<::UnityEngine::Quaternion>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriter@UnityEngine_Quaternion() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion) == 0x1, "Size mismatch!");

} // namespace end def Fusion::CodeGen

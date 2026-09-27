#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterVector2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterVector2)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterVector2;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterVector2);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterVector2, "Fusion", "ElementReaderWriterVector2");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterVector2
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterVector2 {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9b1b0, size 0x3c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(::UnityEngine::Vector2  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9b1a8, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9b1ec, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>* GetInstance() ;

/// @brief Method Read, addr 0x5f9b17c, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9b18c, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<::UnityEngine::Vector2> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9b198, size 0x10, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, ::UnityEngine::Vector2  val) ;

static inline ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>* i___Fusion__IElementReaderWriter_1___UnityEngine__Vector2_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<::UnityEngine::Vector2>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterVector2() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19005};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterVector2) == 0x1, "Size mismatch!");

} // namespace end def Fusion

#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterChar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterChar)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterChar;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterChar);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterChar, "Fusion", "ElementReaderWriterChar");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterChar
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterChar {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<char16_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<char16_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<char16_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9b4fc, size 0x34, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(char16_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9b4f4, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9b530, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<char16_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9b4d0, size 0xc, virtual true, abstract: false, final true
inline char16_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9b4dc, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<char16_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9b4e8, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, char16_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<char16_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<char16_t>"
constexpr ::Fusion::IElementReaderWriter_1<char16_t>* i___Fusion__IElementReaderWriter_1_char16_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<char16_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterChar() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19008};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterChar) == 0x1, "Size mismatch!");

} // namespace end def Fusion

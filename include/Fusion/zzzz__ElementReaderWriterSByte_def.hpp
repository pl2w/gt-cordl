#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterSByte.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterSByte)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterSByte;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterSByte);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterSByte, "Fusion", "ElementReaderWriterSByte");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterSByte
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterSByte {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<int8_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<int8_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<int8_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9aa80, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(int8_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9aa78, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9aa9c, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<int8_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9aa54, size 0xc, virtual true, abstract: false, final true
inline int8_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9aa60, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<int8_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9aa6c, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, int8_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<int8_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<int8_t>"
constexpr ::Fusion::IElementReaderWriter_1<int8_t>* i___Fusion__IElementReaderWriter_1_int8_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<int8_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterSByte() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18996};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterSByte) == 0x1, "Size mismatch!");

} // namespace end def Fusion

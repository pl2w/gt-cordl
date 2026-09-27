#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterUInt16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterUInt16)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterUInt16;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterUInt16);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterUInt16, "Fusion", "ElementReaderWriterUInt16");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterUInt16
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterUInt16 {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<uint16_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<uint16_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<uint16_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9ac18, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(uint16_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9ac10, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9ac34, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<uint16_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9abec, size 0xc, virtual true, abstract: false, final true
inline uint16_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9abf8, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<uint16_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9ac04, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, uint16_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<uint16_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<uint16_t>"
constexpr ::Fusion::IElementReaderWriter_1<uint16_t>* i___Fusion__IElementReaderWriter_1_uint16_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<uint16_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterUInt16() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18998};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterUInt16) == 0x1, "Size mismatch!");

} // namespace end def Fusion

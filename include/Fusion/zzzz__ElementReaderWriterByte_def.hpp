#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterByte.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterByte)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterByte;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterByte);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterByte, "Fusion", "ElementReaderWriterByte");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterByte
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterByte {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<uint8_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<uint8_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<uint8_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9a9b4, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(uint8_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9a9ac, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9a9d0, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<uint8_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9a988, size 0xc, virtual true, abstract: false, final true
inline uint8_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9a994, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<uint8_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9a9a0, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, uint8_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<uint8_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<uint8_t>"
constexpr ::Fusion::IElementReaderWriter_1<uint8_t>* i___Fusion__IElementReaderWriter_1_uint8_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<uint8_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterByte() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18995};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterByte) == 0x1, "Size mismatch!");

} // namespace end def Fusion

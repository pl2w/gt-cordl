#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterInt16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterInt16)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterInt16;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterInt16);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterInt16, "Fusion", "ElementReaderWriterInt16");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterInt16
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterInt16 {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<int16_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<int16_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<int16_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9ab4c, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(int16_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9ab44, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9ab68, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<int16_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9ab20, size 0xc, virtual true, abstract: false, final true
inline int16_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9ab2c, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<int16_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9ab38, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, int16_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<int16_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<int16_t>"
constexpr ::Fusion::IElementReaderWriter_1<int16_t>* i___Fusion__IElementReaderWriter_1_int16_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<int16_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterInt16() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18997};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterInt16) == 0x1, "Size mismatch!");

} // namespace end def Fusion

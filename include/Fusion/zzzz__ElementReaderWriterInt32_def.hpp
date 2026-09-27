#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterInt32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterInt32)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterInt32;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterInt32);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterInt32, "Fusion", "ElementReaderWriterInt32");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterInt32
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterInt32 {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<int32_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<int32_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<int32_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9ace4, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(int32_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9acdc, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9ad00, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<int32_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9acb8, size 0xc, virtual true, abstract: false, final true
inline int32_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9acc4, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<int32_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9acd0, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, int32_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<int32_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<int32_t>"
constexpr ::Fusion::IElementReaderWriter_1<int32_t>* i___Fusion__IElementReaderWriter_1_int32_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<int32_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterInt32() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18999};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterInt32) == 0x1, "Size mismatch!");

} // namespace end def Fusion

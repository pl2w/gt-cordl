#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterDouble.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterDouble)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterDouble;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterDouble);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterDouble, "Fusion", "ElementReaderWriterDouble");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterDouble
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterDouble {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<double_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<double_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<double_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9b0d8, size 0x20, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(double_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9b0d0, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9b0f8, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<double_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9b0ac, size 0xc, virtual true, abstract: false, final true
inline double_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9b0b8, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<double_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9b0c4, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, double_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<double_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<double_t>"
constexpr ::Fusion::IElementReaderWriter_1<double_t>* i___Fusion__IElementReaderWriter_1_double_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<double_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterDouble() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterDouble) == 0x1, "Size mismatch!");

} // namespace end def Fusion

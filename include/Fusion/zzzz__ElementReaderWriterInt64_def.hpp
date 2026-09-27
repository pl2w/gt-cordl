#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterInt64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementReaderWriterInt64)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
// Forward declare root types
namespace Fusion {
struct ElementReaderWriterInt64;
}
// Write type traits
MARK_VAL_T(::Fusion::ElementReaderWriterInt64);
DEFINE_IL2CPP_CLASS(::Fusion::ElementReaderWriterInt64, "Fusion", "ElementReaderWriterInt64");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.ElementReaderWriterInt64
#pragma pack(push, 0)
struct CORDL_TYPE ElementReaderWriterInt64 {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Fusion::IElementReaderWriter_1<int64_t>*  _instance;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<int64_t>"
constexpr operator  ::Fusion::IElementReaderWriter_1<int64_t>*() ;

/// @brief Method GetElementHashCode, addr 0x5f9ae7c, size 0x18, virtual true, abstract: false, final true
inline int32_t GetElementHashCode(int64_t  val) ;

/// @brief Method GetElementWordCount, addr 0x5f9ae74, size 0x8, virtual true, abstract: false, final true
inline int32_t GetElementWordCount() ;

/// @brief Method GetInstance, addr 0x5f9ae94, size 0x84, virtual false, abstract: false, final false
static inline ::Fusion::IElementReaderWriter_1<int64_t>* GetInstance() ;

/// @brief Method Read, addr 0x5f9ae50, size 0xc, virtual true, abstract: false, final true
inline int64_t Read(uint8_t*  data, int32_t  index) ;

/// @brief Method ReadRef, addr 0x5f9ae5c, size 0xc, virtual true, abstract: false, final true
inline ::by_ref<int64_t> ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Write, addr 0x5f9ae68, size 0xc, virtual true, abstract: false, final true
inline void Write(uint8_t*  data, int32_t  index, int64_t  val) ;

static inline ::Fusion::IElementReaderWriter_1<int64_t>* getStaticF__instance() ;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<int64_t>"
constexpr ::Fusion::IElementReaderWriter_1<int64_t>* i___Fusion__IElementReaderWriter_1_int64_t_() ;

static inline void setStaticF__instance(::Fusion::IElementReaderWriter_1<int64_t>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementReaderWriterInt64() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19001};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::ElementReaderWriterInt64) == 0x1, "Size mismatch!");

} // namespace end def Fusion

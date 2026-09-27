#pragma once
// IWYU pragma private; include "Unity/Properties/TypeUtility_Cache_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TypeUtility_Cache_1)
namespace Unity::Properties {
template<typename T>
class TypeUtility_ITypeConstructor_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct TypeUtility_Cache_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::TypeUtility_Cache_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::TypeUtility_Cache_1, "Unity.Properties", "TypeUtility/Cache`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Properties.TypeUtility/Cache`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE TypeUtility_Cache_1 {
public:
// Declarations
/// @brief Field TypeConstructor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypeConstructor, put=setStaticF_TypeConstructor)) ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*  TypeConstructor;

static inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* getStaticF_TypeConstructor() ;

static inline void setStaticF_TypeConstructor(::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TypeUtility_Cache_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29523};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace

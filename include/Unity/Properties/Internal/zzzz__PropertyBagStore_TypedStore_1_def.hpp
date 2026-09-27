#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagStore_TypedStore_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyBagStore_TypedStore_1)
namespace Unity::Properties {
template<typename TContainer>
class IPropertyBag_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TContainer>
struct PropertyBagStore_TypedStore_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::PropertyBagStore_TypedStore_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::PropertyBagStore_TypedStore_1, "Unity.Properties.Internal", "PropertyBagStore/TypedStore`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.Internal.PropertyBagStore/TypedStore`1<TContainer>
#pragma pack(push, 0)
struct CORDL_TYPE PropertyBagStore_TypedStore_1 {
public:
// Declarations
/// @brief Field PropertyBag, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PropertyBag, put=setStaticF_PropertyBag)) ::Unity::Properties::IPropertyBag_1<TContainer>*  PropertyBag;

static inline ::Unity::Properties::IPropertyBag_1<TContainer>* getStaticF_PropertyBag() ;

static inline void setStaticF_PropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PropertyBagStore_TypedStore_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29575};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlDescriptionCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UxmlDescriptionCache)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct UxmlAttributeNames;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlDescriptionCache;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlDescriptionCache*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlDescriptionCache*, "UnityEngine.UIElements", "UxmlDescriptionCache");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlDescriptionCache
class CORDL_TYPE UxmlDescriptionCache : public ::System::Object {
public:
// Declarations
/// @brief Field s_NamesPerType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NamesPerType, put=setStaticF_s_NamesPerType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>*  s_NamesPerType;

/// @brief Method RegisterType, addr 0xb7b7368, size 0x90, virtual false, abstract: false, final false
static inline void RegisterType(::System::Type*  type, ::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>  attributeNames) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>* getStaticF_s_NamesPerType() ;

static inline void setStaticF_s_NamesPerType(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlDescriptionCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlDescriptionCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlDescriptionCache(UxmlDescriptionCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlDescriptionCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlDescriptionCache(UxmlDescriptionCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UxmlDescriptionCache) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements

#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CollectionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class CollectionExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::CollectionExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::CollectionExtensions*, "Unity.XR.CoreUtils", "CollectionExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.CollectionExtensions
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field k_String, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_String, put=setStaticF_k_String)) ::System::Text::StringBuilder*  k_String;

/// [Extension]
/// @brief Method Stringify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW Stringify(::System::Collections::Generic::ICollection_1<T>*  collection) ;

static inline ::System::Text::StringBuilder* getStaticF_k_String() ;

static inline void setStaticF_k_String(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionExtensions(CollectionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionExtensions(CollectionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::CollectionExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils

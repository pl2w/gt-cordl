#pragma once
// IWYU pragma private; include "GorillaTag/GTDirectAssetRef_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTDirectAssetRef_1)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaTag {
template<typename T>
struct GTDirectAssetRef_1;
}
// Write type traits
MARK_GEN_VAL_T(::GorillaTag::GTDirectAssetRef_1);
DEFINE_IL2CPP_GEN_CLASS(::GorillaTag::GTDirectAssetRef_1, "GorillaTag", "GTDirectAssetRef`1");
// Dependencies 
namespace GorillaTag {
// cpp template
template<typename T>
// Is value type: true
// CS Name: GorillaTag.GTDirectAssetRef`1<T>
struct CORDL_TYPE GTDirectAssetRef_1 {
public:
// Declarations
 __declspec(property(get=get_obj, put=set_obj)) T  obj;

/// @brief Convert operator to "::System::IEquatable_1<T>"
constexpr operator  ::System::IEquatable_1<T>*() ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(T  other) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  theObj) ;

/// @brief Method get_obj, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_obj() ;

/// @brief Convert to "::System::IEquatable_1<T>"
constexpr ::System::IEquatable_1<T>* i___System__IEquatable_1_T_() ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::GorillaTag::GTDirectAssetRef_1<T>  left, T  right) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::GorillaTag::GTDirectAssetRef_1<T>  refObject) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GorillaTag::GTDirectAssetRef_1<T> op_Implicit___GorillaTag__GTDirectAssetRef_1_T_(T  other) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::GorillaTag::GTDirectAssetRef_1<T>  left, T  right) ;

/// @brief Method set_obj, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_obj(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTDirectAssetRef_1() ;

// Ctor Parameters [CppParam { name: "_obj", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "edAssetPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr GTDirectAssetRef_1(T  _obj, ::StringW  edAssetPath) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4588};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _obj, offset: 0x0, size: 0x8, def value: None
 T  _obj;

/// [FormerlySerializedAs("assetPath")]
/// @brief Field edAssetPath, offset: 0x8, size: 0x8, def value: None
 ::StringW  edAssetPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GorillaTag

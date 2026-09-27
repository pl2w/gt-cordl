#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Sizei.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Sizei)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Sizei;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Sizei);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Sizei, "", "OVRPlugin/Sizei");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Sizei
struct CORDL_TYPE OVRPlugin_Sizei {
public:
// Declarations
/// @brief Field zero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zero, put=setStaticF_zero)) ::GlobalNamespace::OVRPlugin_Sizei  zero;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>*() ;

/// @brief Method Equals, addr 0xa60eb04, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa60eadc, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRPlugin_Sizei  other) ;

/// @brief Method GetHashCode, addr 0xa60eba0, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::GlobalNamespace::OVRPlugin_Sizei getStaticF_zero() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>* i___System__IEquatable_1___GlobalNamespace__OVRPlugin_Sizei_() ;

static inline void setStaticF_zero(::GlobalNamespace::OVRPlugin_Sizei  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Sizei() ;

// Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Sizei(int32_t  w, int32_t  h) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field w, offset: 0x0, size: 0x4, def value: None
 int32_t  w;

/// @brief Field h, offset: 0x4, size: 0x4, def value: None
 int32_t  h;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Sizei, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Sizei, h) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Sizei) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

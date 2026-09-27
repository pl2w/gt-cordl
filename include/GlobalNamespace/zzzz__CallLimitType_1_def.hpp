#pragma once
// IWYU pragma private; include "GlobalNamespace/CallLimitType_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FXType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CallLimitType_1)
namespace GlobalNamespace {
class CallLimiter;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class CallLimitType_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CallLimitType_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CallLimitType_1, "", "CallLimitType`1");
// Dependencies FXType, System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: CallLimitType`1<T>
class CORDL_TYPE CallLimitType_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CallLimitSettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CallLimitSettings, put=__cordl_internal_set_CallLimitSettings)) T  CallLimitSettings;

/// @brief Field Key, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::GlobalNamespace::FXType  Key;

/// @brief Field UseNetWorkTime, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseNetWorkTime, put=__cordl_internal_set_UseNetWorkTime)) bool  UseNetWorkTime;

static inline ::GlobalNamespace::CallLimitType_1<T>* New_ctor() ;

constexpr T const& __cordl_internal_get_CallLimitSettings() const;

constexpr T& __cordl_internal_get_CallLimitSettings() ;

constexpr ::GlobalNamespace::FXType const& __cordl_internal_get_Key() const;

constexpr ::GlobalNamespace::FXType& __cordl_internal_get_Key() ;

constexpr bool const& __cordl_internal_get_UseNetWorkTime() const;

constexpr bool& __cordl_internal_get_UseNetWorkTime() ;

constexpr void __cordl_internal_set_CallLimitSettings(T  value) ;

constexpr void __cordl_internal_set_Key(::GlobalNamespace::FXType  value) ;

constexpr void __cordl_internal_set_UseNetWorkTime(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiter*>* op_Implicit___GlobalNamespace__CallLimitType_1___GlobalNamespace__CallLimiter___(::GlobalNamespace::CallLimitType_1<T>*  clt) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallLimitType_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallLimitType_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallLimitType_1(CallLimitType_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallLimitType_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallLimitType_1(CallLimitType_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3371};

/// @brief Field Key, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::FXType  ___Key;

/// @brief Field UseNetWorkTime, offset: 0x14, size: 0x1, def value: None
 bool  ___UseNetWorkTime;

/// @brief Field CallLimitSettings, offset: 0x18, size: 0x8, def value: None
 T  ___CallLimitSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

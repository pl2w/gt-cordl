#pragma once
// IWYU pragma private; include "GlobalNamespace/CallbackPair_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackPair_1)
namespace GlobalNamespace {
class MothershipError;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class CallbackPair_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CallbackPair_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CallbackPair_1, "", "CallbackPair`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: CallbackPair`1<T>
class CORDL_TYPE CallbackPair_1 : public ::System::Object {
public:
// Declarations
/// @brief Field errorCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorCallback;

/// @brief Field successCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<T>*  successCallback;

static inline ::GlobalNamespace::CallbackPair_1<T>* New_ctor() ;

constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*& __cordl_internal_get_errorCallback() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackPair_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackPair_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackPair_1(CallbackPair_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackPair_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackPair_1(CallbackPair_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9751};

/// @brief Field successCallback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___successCallback;

/// @brief Field errorCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  ___errorCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/PlayerNameTagFusion.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Fusion/zzzz__NetworkString_1_impl.hpp"
#include "Fusion/zzzz___64_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__PlayerNameTagFusion_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___64_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__PlayerNameTagFusion_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.get_OculusName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkString_1<::Fusion::_64> (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::get_OculusName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f60458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"get_OculusName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.set_OculusName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)(::Fusion::NetworkString_1<::Fusion::_64>)>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::set_OculusName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f604b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"set_OculusName", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_64>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::Start)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9f60514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.UpdateNameUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::UpdateNameUI)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f60754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"UpdateNameUI", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.OnPlayerNameChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::OnPlayerNameChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f606a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"OnPlayerNameChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.FixedUpdateNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::FixedUpdateNetwork)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9f60804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::Update)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9f60944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f60a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)(bool)>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f60a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f60adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkString_1<::Fusion::_64>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get__OculusName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OculusName;
}
constexpr ::Fusion::NetworkString_1<::Fusion::_64> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get__OculusName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OculusName;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_set__OculusName(::Fusion::NetworkString_1<::Fusion::_64>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OculusName = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTag;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTag;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_set_nameTag(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameTag = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTagGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTagGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTagGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTagGO;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_set_nameTagGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameTagGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTagPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTagPanel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTagPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTagPanel;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_set_nameTagPanel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameTagPanel = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTagContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTagContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_nameTagContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameTagContainer;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_set_nameTagContainer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameTagContainer = value;
}
constexpr float_t& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_heightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr float_t const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get_heightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_set_heightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get__centerEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerEye;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_get__centerEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerEye;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::__cordl_internal_set__centerEye(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____centerEye = value;
}
inline ::Fusion::NetworkString_1<::Fusion::_64> Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::get_OculusName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"get_OculusName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<::Fusion::_64>>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::set_OculusName(::Fusion::NetworkString_1<::Fusion::_64>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"set_OculusName", {}, {::i2c::type_of<::Fusion::NetworkString_1<::Fusion::_64>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::UpdateNameUI(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"UpdateNameUI", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, playerName);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::OnPlayerNameChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"OnPlayerNameChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::FixedUpdateNetwork()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion::PlayerNameTagFusion()   {
}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::*)(int32_t)>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f607dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f60b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f60b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f60c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f60c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f60c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_set___4__this(::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::StringW const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::__cordl_internal_set_playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11::PlayerNameTagFusion__UpdateNameUI_d__11()   {
}

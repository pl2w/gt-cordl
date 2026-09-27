#pragma once
// IWYU pragma private; include "Cosmetics/CreatorCodeTerminal.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Cosmetics/zzzz__CreatorCodeTerminal_def.hpp"
#include "Cosmetics/zzzz__CreatorCodeTerminal__OnTerminalMessage_d__13_def.hpp"
#include "Cosmetics/zzzz__ICreatorCodeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.get_NexusGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>> (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::get_NexusGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1ce78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"get_NexusGroups", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.get_TerminalId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::get_TerminalId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1ce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"get_TerminalId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.Cosmetics_ICreatorCodeProvider_get_GameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::Cosmetics_ICreatorCodeProvider_get_GameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1ce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"Cosmetics.ICreatorCodeProvider.get_GameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d1ce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d1d178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.HookupToCreatorCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::HookupToCreatorCodes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5d1cf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"HookupToCreatorCodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.OnTerminalMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::StringW, ::StringW)>(&::Cosmetics::CreatorCodeTerminal::OnTerminalMessage)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d1d3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnTerminalMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.UnhookFromCreatorCodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::UnhookFromCreatorCodes)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5d1d17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"UnhookFromCreatorCodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.OnCreatorCodesInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::OnCreatorCodesInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1d3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodesInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.OnCreatorCodeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::StringW)>(&::Cosmetics::CreatorCodeTerminal::OnCreatorCodeChanged)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5d1d490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.CreatorCodeInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::StringW)>(&::Cosmetics::CreatorCodeTerminal::CreatorCodeInput)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d1d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"CreatorCodeInput", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.CreatorCodeDelete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::CreatorCodeDelete)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d1d62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"CreatorCodeDelete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.OnCreatorCodeValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::StringW, ::StringW, ::GlobalNamespace::NexusGroupId*)>(&::Cosmetics::CreatorCodeTerminal::OnCreatorCodeValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d1d688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeValid", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NexusGroupId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.OnCreatorCodeValidating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::StringW)>(&::Cosmetics::CreatorCodeTerminal::OnCreatorCodeValidating)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d1d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeValidating", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.CreatorCodeInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::StringW)>(&::Cosmetics::CreatorCodeTerminal::CreatorCodeInvalid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d1d788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"CreatorCodeInvalid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.OnCreatorCodeFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::StringW)>(&::Cosmetics::CreatorCodeTerminal::OnCreatorCodeFailure)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d1d808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d1d888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal.GetCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)(::by_ref<::StringW>, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>)>(&::Cosmetics::CreatorCodeTerminal::GetCreatorCode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d1d954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"GetCreatorCode", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CreatorCodeTerminal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CreatorCodeTerminal::*)()>(&::Cosmetics::CreatorCodeTerminal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_termId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___termId;
}
constexpr ::StringW const& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_termId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___termId;
}
constexpr void Cosmetics::CreatorCodeTerminal::__cordl_internal_set_termId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___termId = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_creatorCodeField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_creatorCodeField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeField;
}
constexpr void Cosmetics::CreatorCodeTerminal::__cordl_internal_set_creatorCodeField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCodeField = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_creatorCodeTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeTitle;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_creatorCodeTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeTitle;
}
constexpr void Cosmetics::CreatorCodeTerminal::__cordl_internal_set_creatorCodeTitle(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCodeTitle = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_nexusGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nexusGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>> const& Cosmetics::CreatorCodeTerminal::__cordl_internal_get_nexusGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nexusGroups;
}
constexpr void Cosmetics::CreatorCodeTerminal::__cordl_internal_set_nexusGroups(::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nexusGroups = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>> Cosmetics::CreatorCodeTerminal::get_NexusGroups()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"get_NexusGroups", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>>(this, ___internal_method);
}
inline ::StringW Cosmetics::CreatorCodeTerminal::get_TerminalId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"get_TerminalId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Cosmetics::CreatorCodeTerminal::Cosmetics_ICreatorCodeProvider_get_GameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"Cosmetics.ICreatorCodeProvider.get_GameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::HookupToCreatorCodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"HookupToCreatorCodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::OnTerminalMessage(::StringW  termId, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnTerminalMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, termId, msg);
}
inline void Cosmetics::CreatorCodeTerminal::UnhookFromCreatorCodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"UnhookFromCreatorCodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::OnCreatorCodesInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodesInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::OnCreatorCodeChanged(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Cosmetics::CreatorCodeTerminal::CreatorCodeInput(::StringW  character)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"CreatorCodeInput", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, character);
}
inline void Cosmetics::CreatorCodeTerminal::CreatorCodeDelete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"CreatorCodeDelete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::OnCreatorCodeValid(::StringW  id, ::StringW  s, ::GlobalNamespace::NexusGroupId*  ngid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeValid", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NexusGroupId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, s, ngid);
}
inline void Cosmetics::CreatorCodeTerminal::OnCreatorCodeValidating(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeValidating", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Cosmetics::CreatorCodeTerminal::CreatorCodeInvalid(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"CreatorCodeInvalid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Cosmetics::CreatorCodeTerminal::OnCreatorCodeFailure(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"OnCreatorCodeFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool Cosmetics::CreatorCodeTerminal::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cosmetics::CreatorCodeTerminal::GetCreatorCode(::by_ref<::StringW>  code, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>  groups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {"GetCreatorCode", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, groups);
}
inline void Cosmetics::CreatorCodeTerminal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CreatorCodeTerminal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cosmetics::CreatorCodeTerminal* Cosmetics::CreatorCodeTerminal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cosmetics::CreatorCodeTerminal*>());
}
/// @brief Convert operator to "::Cosmetics::ICreatorCodeProvider"
constexpr  Cosmetics::CreatorCodeTerminal::operator ::Cosmetics::ICreatorCodeProvider*() noexcept {
return static_cast<::Cosmetics::ICreatorCodeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cosmetics::ICreatorCodeProvider"
constexpr ::Cosmetics::ICreatorCodeProvider* Cosmetics::CreatorCodeTerminal::i___Cosmetics__ICreatorCodeProvider() noexcept {
return static_cast<::Cosmetics::ICreatorCodeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  Cosmetics::CreatorCodeTerminal::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* Cosmetics::CreatorCodeTerminal::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cosmetics::CreatorCodeTerminal::CreatorCodeTerminal()   {
}

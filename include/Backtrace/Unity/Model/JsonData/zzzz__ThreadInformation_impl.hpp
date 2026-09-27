#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/ThreadInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__ThreadInformation_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackFrame_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)()>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)(::StringW)>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation.get_Fault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)()>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::get_Fault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"get_Fault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation.set_Fault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)(bool)>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::set_Fault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1b4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"set_Fault", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)()>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::ToJson)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5f1b274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)(::StringW, bool, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*)>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f1b5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)(::System::Threading::Thread*, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*, bool)>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f1b090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::ThreadInformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::ThreadInformation::*)()>(&::Backtrace::Unity::Model::JsonData::ThreadInformation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f1b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr bool& Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_get__Fault_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fault_k__BackingField;
}
constexpr bool const& Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_get__Fault_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Fault_k__BackingField;
}
constexpr void Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_set__Fault_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Fault_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_get_Stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stack;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* const& Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_get_Stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stack;
}
constexpr void Backtrace::Unity::Model::JsonData::ThreadInformation::__cordl_internal_set_Stack(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stack = value;
}
inline ::StringW Backtrace::Unity::Model::JsonData::ThreadInformation::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::ThreadInformation::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Backtrace::Unity::Model::JsonData::ThreadInformation::get_Fault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"get_Fault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::ThreadInformation::set_Fault(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"set_Fault", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::JsonData::ThreadInformation::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::ThreadInformation::_ctor(::StringW  threadName, bool  fault, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threadName, fault, stack);
}
inline void Backtrace::Unity::Model::JsonData::ThreadInformation::_ctor(::System::Threading::Thread*  thread, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack, bool  faultingThread)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thread, stack, faultingThread);
}
inline void Backtrace::Unity::Model::JsonData::ThreadInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::JsonData::ThreadInformation* Backtrace::Unity::Model::JsonData::ThreadInformation::New_ctor(::StringW  threadName, bool  fault, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(threadName, fault, stack));
}
inline ::Backtrace::Unity::Model::JsonData::ThreadInformation* Backtrace::Unity::Model::JsonData::ThreadInformation::New_ctor(::System::Threading::Thread*  thread, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack, bool  faultingThread)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::ThreadInformation*>(thread, stack, faultingThread));
}
inline ::Backtrace::Unity::Model::JsonData::ThreadInformation* Backtrace::Unity::Model::JsonData::ThreadInformation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::ThreadInformation*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::JsonData::ThreadInformation::ThreadInformation()   {
}

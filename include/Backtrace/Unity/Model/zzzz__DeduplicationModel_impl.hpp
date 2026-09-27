#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/DeduplicationModel.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__DeduplicationModel_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackFrame_def.hpp"
#include "Backtrace/Unity/Model/zzzz__DeduplicationModel_def.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::DeduplicationModel::*)(::Backtrace::Unity::Model::BacktraceData*, ::Backtrace::Unity::Types::DeduplicationStrategy)>(&::Backtrace::Unity::Model::DeduplicationModel::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f080e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::Backtrace::Unity::Types::DeduplicationStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel.get_StackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::DeduplicationModel::*)()>(&::Backtrace::Unity::Model::DeduplicationModel::get_StackTrace)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5f1505c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_StackTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel.get_Classifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::DeduplicationModel::*)()>(&::Backtrace::Unity::Model::DeduplicationModel::get_Classifier)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f152f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_Classifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel.get_ExceptionMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::DeduplicationModel::*)()>(&::Backtrace::Unity::Model::DeduplicationModel::get_ExceptionMessage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f15398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_ExceptionMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel.get_Factor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::DeduplicationModel::*)()>(&::Backtrace::Unity::Model::DeduplicationModel::get_Factor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f15408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_Factor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel.GetSha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::DeduplicationModel::*)()>(&::Backtrace::Unity::Model::DeduplicationModel::GetSha)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f08124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"GetSha", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::BacktraceData*& Backtrace::Unity::Model::DeduplicationModel::__cordl_internal_get__backtraceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backtraceData;
}
constexpr ::Backtrace::Unity::Model::BacktraceData* const& Backtrace::Unity::Model::DeduplicationModel::__cordl_internal_get__backtraceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backtraceData;
}
constexpr void Backtrace::Unity::Model::DeduplicationModel::__cordl_internal_set__backtraceData(::Backtrace::Unity::Model::BacktraceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backtraceData = value;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& Backtrace::Unity::Model::DeduplicationModel::__cordl_internal_get__strategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strategy;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& Backtrace::Unity::Model::DeduplicationModel::__cordl_internal_get__strategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strategy;
}
constexpr void Backtrace::Unity::Model::DeduplicationModel::__cordl_internal_set__strategy(::Backtrace::Unity::Types::DeduplicationStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strategy = value;
}
inline void Backtrace::Unity::Model::DeduplicationModel::_ctor(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::Backtrace::Unity::Types::DeduplicationStrategy  strategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::Backtrace::Unity::Types::DeduplicationStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backtraceData, strategy);
}
inline ::StringW Backtrace::Unity::Model::DeduplicationModel::get_StackTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_StackTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::DeduplicationModel::get_Classifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_Classifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::DeduplicationModel::get_ExceptionMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_ExceptionMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::DeduplicationModel::get_Factor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"get_Factor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::DeduplicationModel::GetSha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel*>(),
                        {"GetSha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::DeduplicationModel* Backtrace::Unity::Model::DeduplicationModel::New_ctor(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::Backtrace::Unity::Types::DeduplicationStrategy  strategy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::DeduplicationModel*>(backtraceData, strategy));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::DeduplicationModel::DeduplicationModel()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::DeduplicationModel___c::*)()>(&::Backtrace::Unity::Model::DeduplicationModel___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f154a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel___c._get_StackTrace_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::DeduplicationModel___c::*)(::Backtrace::Unity::Model::BacktraceStackFrame*)>(&::Backtrace::Unity::Model::DeduplicationModel___c::_get_StackTrace_b__4_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f154b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel___c*>(),
                        {"<get_StackTrace>b__4_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceStackFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::DeduplicationModel___c._get_StackTrace_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::DeduplicationModel___c::*)(::StringW)>(&::Backtrace::Unity::Model::DeduplicationModel___c::_get_StackTrace_b__4_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f154c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel___c*>(),
                        {"<get_StackTrace>b__4_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::DeduplicationModel___c::setStaticF___9(::Backtrace::Unity::Model::DeduplicationModel___c*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::Model::DeduplicationModel___c*, "<>9", ::Backtrace::Unity::Model::DeduplicationModel___c*>(std::forward<::Backtrace::Unity::Model::DeduplicationModel___c*>(value));
}
inline ::Backtrace::Unity::Model::DeduplicationModel___c* Backtrace::Unity::Model::DeduplicationModel___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::Model::DeduplicationModel___c*, "<>9", ::Backtrace::Unity::Model::DeduplicationModel___c*>();
}
inline void Backtrace::Unity::Model::DeduplicationModel___c::setStaticF___9__4_0(::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>*, "<>9__4_0", ::Backtrace::Unity::Model::DeduplicationModel___c*>(std::forward<::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>*>(value));
}
inline ::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>* Backtrace::Unity::Model::DeduplicationModel___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Backtrace::Unity::Model::BacktraceStackFrame*,::StringW>*, "<>9__4_0", ::Backtrace::Unity::Model::DeduplicationModel___c*>();
}
inline void Backtrace::Unity::Model::DeduplicationModel___c::setStaticF___9__4_1(::System::Func_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__4_1", ::Backtrace::Unity::Model::DeduplicationModel___c*>(std::forward<::System::Func_2<::StringW,::StringW>*>(value));
}
inline ::System::Func_2<::StringW,::StringW>* Backtrace::Unity::Model::DeduplicationModel___c::getStaticF___9__4_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::StringW>*, "<>9__4_1", ::Backtrace::Unity::Model::DeduplicationModel___c*>();
}
inline void Backtrace::Unity::Model::DeduplicationModel___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::DeduplicationModel___c::_get_StackTrace_b__4_0(::Backtrace::Unity::Model::BacktraceStackFrame*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel___c*>(),
                        {"<get_StackTrace>b__4_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceStackFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, n);
}
inline ::StringW Backtrace::Unity::Model::DeduplicationModel___c::_get_StackTrace_b__4_1(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::DeduplicationModel___c*>(),
                        {"<get_StackTrace>b__4_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Model::DeduplicationModel___c* Backtrace::Unity::Model::DeduplicationModel___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::DeduplicationModel___c*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::DeduplicationModel___c::DeduplicationModel___c()   {
}

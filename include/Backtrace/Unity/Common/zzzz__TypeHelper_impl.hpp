#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/TypeHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__TypeHelper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::TypeHelper.IsNumeric
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Backtrace::Unity::Common::TypeHelper::IsNumeric)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f271dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::TypeHelper*>(),
                        {"IsNumeric", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Common::TypeHelper::setStaticF_NumericTypes(::System::Collections::Generic::HashSet_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "NumericTypes", ::Backtrace::Unity::Common::TypeHelper*>(std::forward<::System::Collections::Generic::HashSet_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* Backtrace::Unity::Common::TypeHelper::getStaticF_NumericTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "NumericTypes", ::Backtrace::Unity::Common::TypeHelper*>();
}
inline bool Backtrace::Unity::Common::TypeHelper::IsNumeric(::System::Type*  myType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::TypeHelper*>(),
                        {"IsNumeric", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, myType);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::TypeHelper::TypeHelper()   {
}

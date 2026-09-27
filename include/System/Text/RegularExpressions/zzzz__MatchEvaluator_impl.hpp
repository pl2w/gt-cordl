#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/MatchEvaluator.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__MatchEvaluator_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Match_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::MatchEvaluator::*)(::System::Object*, ::System::IntPtr)>(&::System::Text::RegularExpressions::MatchEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xad10a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::RegularExpressions::MatchEvaluator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchEvaluator.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::RegularExpressions::MatchEvaluator::*)(::System::Text::RegularExpressions::Match*)>(&::System::Text::RegularExpressions::MatchEvaluator::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad10b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Text::RegularExpressions::MatchEvaluator*>(),
                    {::i2c::class_of<::System::Text::RegularExpressions::MatchEvaluator*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::MatchEvaluator::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Text::RegularExpressions::MatchEvaluator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::StringW System::Text::RegularExpressions::MatchEvaluator::Invoke(::System::Text::RegularExpressions::Match*  match)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Text::RegularExpressions::MatchEvaluator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, match);
}
inline ::System::Text::RegularExpressions::MatchEvaluator* System::Text::RegularExpressions::MatchEvaluator::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::MatchEvaluator*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::MatchEvaluator::MatchEvaluator()   {
}

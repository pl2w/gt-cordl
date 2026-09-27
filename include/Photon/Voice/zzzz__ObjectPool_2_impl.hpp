#pragma once
// IWYU pragma private; include "Photon/Voice/ObjectPool_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__ObjectPool_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename TType,typename TInfo>
constexpr int32_t& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capacity;
}
template<typename TType,typename TInfo>
constexpr int32_t const& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capacity;
}
template<typename TType,typename TInfo>
constexpr void Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_set_capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capacity = value;
}
template<typename TType,typename TInfo>
constexpr TInfo& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
template<typename TType,typename TInfo>
constexpr TInfo const& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
template<typename TType,typename TInfo>
constexpr void Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_set_info(TInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___info = value;
}
template<typename TType,typename TInfo>
constexpr ::ArrayW<TType>& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_freeObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeObj;
}
template<typename TType,typename TInfo>
constexpr ::ArrayW<TType> const& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_freeObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeObj;
}
template<typename TType,typename TInfo>
constexpr void Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_set_freeObj(::ArrayW<TType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeObj = value;
}
template<typename TType,typename TInfo>
constexpr int32_t& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
template<typename TType,typename TInfo>
constexpr int32_t const& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
template<typename TType,typename TInfo>
constexpr void Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_set_pos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
template<typename TType,typename TInfo>
constexpr ::StringW& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
template<typename TType,typename TInfo>
constexpr ::StringW const& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
template<typename TType,typename TInfo>
constexpr void Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
template<typename TType,typename TInfo>
constexpr bool& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_inited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inited;
}
template<typename TType,typename TInfo>
constexpr bool const& Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_get_inited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inited;
}
template<typename TType,typename TInfo>
constexpr void Photon::Voice::ObjectPool_2<TType,TInfo>::__cordl_internal_set_inited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inited = value;
}
template<typename TType,typename TInfo>
inline TType Photon::Voice::ObjectPool_2<TType,TInfo>::createObject(TInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<TType>(this, ___internal_method, info);
}
template<typename TType,typename TInfo>
inline void Photon::Voice::ObjectPool_2<TType,TInfo>::destroyObject(TType  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TType,typename TInfo>
inline bool Photon::Voice::ObjectPool_2<TType,TInfo>::infosMatch(TInfo  i0, TInfo  i1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i0, i1);
}
template<typename TType,typename TInfo>
inline ::StringW Photon::Voice::ObjectPool_2<TType,TInfo>::get_LogPrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {"get_LogPrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TType,typename TInfo>
inline void Photon::Voice::ObjectPool_2<TType,TInfo>::_ctor(int32_t  capacity, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, name);
}
template<typename TType,typename TInfo>
inline void Photon::Voice::ObjectPool_2<TType,TInfo>::_ctor(int32_t  capacity, ::StringW  name, TInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, name, info);
}
template<typename TType,typename TInfo>
inline void Photon::Voice::ObjectPool_2<TType,TInfo>::Init(TInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {"Init", {}, {::i2c::type_of<TInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
template<typename TType,typename TInfo>
inline TInfo Photon::Voice::ObjectPool_2<TType,TInfo>::get_Info()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {"get_Info", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TInfo>(this, ___internal_method);
}
template<typename TType,typename TInfo>
inline TType Photon::Voice::ObjectPool_2<TType,TInfo>::AcquireOrCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {"AcquireOrCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TType>(this, ___internal_method);
}
template<typename TType,typename TInfo>
inline TType Photon::Voice::ObjectPool_2<TType,TInfo>::AcquireOrCreate(TInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {"AcquireOrCreate", {}, {::i2c::type_of<TInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TType>(this, ___internal_method, info);
}
template<typename TType,typename TInfo>
inline bool Photon::Voice::ObjectPool_2<TType,TInfo>::Release(TType  obj, TInfo  objInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, objInfo);
}
template<typename TType,typename TInfo>
inline bool Photon::Voice::ObjectPool_2<TType,TInfo>::Release(TType  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template<typename TType,typename TInfo>
inline void Photon::Voice::ObjectPool_2<TType,TInfo>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TType,typename TInfo>
inline ::Photon::Voice::ObjectPool_2<TType,TInfo>* Photon::Voice::ObjectPool_2<TType,TInfo>::New_ctor(int32_t  capacity, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(capacity, name));
}
template<typename TType,typename TInfo>
inline ::Photon::Voice::ObjectPool_2<TType,TInfo>* Photon::Voice::ObjectPool_2<TType,TInfo>::New_ctor(int32_t  capacity, ::StringW  name, TInfo  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ObjectPool_2<TType,TInfo>*>(capacity, name, info));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TType,typename TInfo>
constexpr  Photon::Voice::ObjectPool_2<TType,TInfo>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TType,typename TInfo>
constexpr ::System::IDisposable* Photon::Voice::ObjectPool_2<TType,TInfo>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TType,typename TInfo>
constexpr ::Photon::Voice::ObjectPool_2<TType,TInfo>::ObjectPool_2()   {
}

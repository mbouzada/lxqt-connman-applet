/*
 * This file was generated by qdbusxml2cpp version 0.8 and subsequently hand edited
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 */

#ifndef AGENTADAPTOR_H
#define AGENTADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "agent.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface net.connman.Agent
 */
class AgentAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "net.connman.Agent")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"net.connman.Agent\">\n"
"    <method name=\"Release\"/>\n"
"    <method name=\"Cancel\"/>\n"
"    <method name=\"ReportError\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"service\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"error\"/>\n"
"    </method>\n"
"    <method name=\"ReportPeerError\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"peer\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"error\"/>\n"
"    </method>\n"
"    <method name=\"RequestBrowser\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"service\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\"/>\n"
"    </method>\n"
"    <method name=\"RequestInput\">\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"      <arg direction=\"in\" type=\"o\" name=\"service\"/>\n"
"      <arg direction=\"in\" type=\"a{sv}\" name=\"fields\"/>\n"
"      <arg direction=\"out\" type=\"a{sv}\" name=\"answer\"/>\n"
"    </method>\n"
"    <method name=\"RequestPeerAuthorization\">\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"      <arg direction=\"in\" type=\"o\" name=\"peer\"/>\n"
"      <arg direction=\"in\" type=\"a{sv}\" name=\"fields\"/>\n"
"      <arg direction=\"out\" type=\"a{sv}\" name=\"answer\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    AgentAdaptor(Agent *parent);
    virtual ~AgentAdaptor();

    inline Agent *parent() const
    { return static_cast<Agent *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Cancel();
    void Release();
    void ReportError(const QDBusObjectPath &service, const QString &error);
    void ReportPeerError(const QDBusObjectPath &peer, const QString &error);
    void RequestBrowser(const QDBusObjectPath &service, const QString &url);
    QVariantMap RequestInput(const QDBusObjectPath &service, const QVariantMap &fields);
    QVariantMap RequestPeerAuthorization(const QDBusObjectPath &peer, const QVariantMap &fields);
Q_SIGNALS: // SIGNALS
};

#endif